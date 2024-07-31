# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    evaluar.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miperez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 13:43:49 by miperez-          #+#    #+#              #
#    Updated: 2024/07/19 13:43:57 by miperez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

# Define el directorio que contiene tus archivos con el main
my_code_dir="$HOME/Ejercicios/C01"

# Función para extraer el contenido del main y las librerías de un archivo .c comentado con /* ... */
extract_main_and_libraries() {
  local file="$1"
  local inside_comment=0
  local output=""

  while IFS= read -r line; do
    # Detecta el comienzo de los comentarios
    if [[ "$line" =~ /\* ]]; then
      inside_comment=1
    fi

    # Agrega líneas dentro de los comentarios
    if [ $inside_comment -eq 1 ]; then
      output+="$line"$'\n'
    fi

    # Detecta el final de los comentarios
    if [[ "$line" =~ \*/ ]]; then
      inside_comment=0
    fi
  done < "$file"

  echo "$output"
}

# Encuentra todos los archivos .c en los subdirectorios ex00, ex01, etc.
files=$(find . -name "ex*" -type d | xargs -I {} find {} -name "*.c")

# Verifica que se encontraron archivos .c
if [ -z "$files" ]; then
  echo "No se encontraron archivos .c en los subdirectorios ex00, ex01, etc."
  exit 1
fi

# Ejecuta norminette en todos los archivos .c encontrados
echo "==============================="
echo "Ejecutando norminette en todos los archivos .c"
echo "==============================="
norminette $files

# Espera a que se presione una tecla para continuar
read -p "Presiona cualquier tecla para continuar con la compilación y ejecución..."

# Inicializa variables de resumen
processed=0
skipped=0
failed=0

# Recorre cada archivo .c encontrado
for file in $files; do
  # Extrae el nombre del subdirectorio (ej: ex00, ex01, etc.)
  exercise_dir=$(basename $(dirname "$file"))

  # Define el archivo con el main correspondiente en tu directorio de código
  my_code_file="$my_code_dir/$exercise_dir/$(basename "$file")"

  # Verifica que el archivo correspondiente existe
  if [ ! -f "$my_code_file" ]; then
    echo "No se encontró el archivo $my_code_file para $exercise_dir en $my_code_dir."
    skipped=$((skipped + 1))
    continue
  fi

  # Extrae el main y las librerías de tu archivo
  main_and_libraries=$(extract_main_and_libraries "$my_code_file")

  # Combina el archivo del alumno con tu main y librerías
  combined_file="${file%.c}_combined.c"
  cp "$file" "$combined_file"
  echo "$main_and_libraries" >> "$combined_file"

  echo "==============================="
  echo "Compilando $combined_file"
  echo "==============================="

  # Compila el archivo combinado
  gcc -Wall -Wextra -Werror "$combined_file" -o "${combined_file%.c}.out"

  # Verifica si la compilación fue exitosa
  if [ $? -ne 0 ]; then
    echo "Error en la compilación del archivo $combined_file."
    echo "-------------------------------"
    rm "$combined_file"
    failed=$((failed + 1))
    continue
  fi

  # Ejecuta el archivo compilado
  echo "-------------------------------"
  echo "Ejecutando ${combined_file%.c}.out"
  echo "-------------------------------"
  ./"${combined_file%.c}.out"
  echo "==============================="
  echo

  # Limpia el archivo combinado
  rm "$combined_file"
  processed=$((processed + 1))
done

# Resumen de la ejecución
echo "==============================="
echo "Resumen de la ejecución:"
echo "Procesados: $processed"
echo "Omitidos: $skipped"
echo "Fallidos: $failed"
echo "==============================="

# Abrir todos los archivos .c de los alumnos con gedit
echo "Abriendo todos los archivos .c con gedit..."
find . -name "ex*" -type d -exec find {} -name "*.c" \; -exec gedit {} +


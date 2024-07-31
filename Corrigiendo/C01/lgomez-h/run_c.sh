#!/bin/bash

# Encuentra todos los archivos .c en el directorio actual y subdirectorios
files=$(find . -name "*.c")

# Verifica que se encontraron archivos .c
if [ -z "$files" ]; then
  echo "No se encontraron archivos .c en el directorio actual ni en sus subdirectorios."
  exit 1
fi

# Recorre cada archivo .c encontrado
for file in $files; do
  # Compila el archivo C
  gcc -Wall -Wextra -Werror "$file" -o "${file%.c}.out"
  
  # Verifica si la compilación fue exitosa
  if [ $? -ne 0 ]; then
    echo "Error en la compilación del archivo $file."
    continue
  fi
  
  # Ejecuta el archivo compilado
  echo "Ejecutando ${file%.c}.out"
  ./"${file%.c}.out"
done

#!/bin/sh

id -Gn $FT_USER | tr -s ' ' ',' | tr -d '\n'
# id -> muestra información sobre los usuarios y los grupos a los que pertenece
# -G -> muestra todos los grupos (en formato id) a los que pertenece el usuario seleccionado
# -n -> muestra los nombres en vez de los IDs.
# $ -> referencia el valor que contiene la variable de entorno FT_USER
# FT_USER -> variable de entorno que contiene el nombre de usuario
#
# Se pasa la salida del primer comando al comando tr
#
# tr -> (translate): traduce el primer parámetro al segundo. O sea, cambia
# el primero por el segudo

# -s -> reemplaza varios espacios seguidos por uno solo

# Se pasa la salida del comando anterior al siguiente comando tr

# tr -> (translate): traduce el primer parámetro al segundo. O sea, cambia
# el primero por el segudo
# -d -> elimina el carácter seleccionado. En este caso el salto de línea

#!/bin/sh

find . -type f -name '*.sh' -exec basename {} .sh \;

#find: comando para buscar archivos
# -type f: indica a find que sólo busque archivos regualares y no directorios
# ni enlaces
# -name '*.sh' indica a find que sólo busque archivos con extensión sh
# los paréntesis son necesarios para que la shell no interprete el asterisco
# -exec: ejecuta un comando sobre los archivos encontrados. En este caso
# ejecuta el comando basename
# basename: devuelve el nombre base del archivo (sin directorio)
# {} . sh: las llaves marcan la posición para el nombre encontrado y find
# lo sustituye por el nombre real
# \; El punto y coma tiene que tener tener la barra invertida por delante
# para que shell no lo interprete mal. Punto y coma = final del comando

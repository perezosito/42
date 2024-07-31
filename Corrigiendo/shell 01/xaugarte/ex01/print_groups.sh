#!/bin/sh
id -Gn $FT_USER | sed 's/ /,/g' | tr -d '\n'
# id   -Gn muestra grupos del usuario en variable FT_USER
# sed sustituye espacio por coma

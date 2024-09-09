#!/bin/sh
#busca archivos .sh en dirs y subdirs y muestra sin indicar ruta ni extensión .sh
find . -type f -name '*.sh' -exec basename {} .sh  \;

#!/bin/sh

find . -type f,d | wc -l | awk '{print $1}'

# find: busca archivos
# type f,d: indica que sean de tipo f = regulares (ni directorios ni enlaces)
# d = directorios. Separados por una coma hace que busque ambos
# wc: "word count" cuenta palabras. Al añadirle .l cuenta líneas
# awk: procesa el texto con el formato contenido en las llaves.
# print: imprime en la salida el valor "$1": la primera columna

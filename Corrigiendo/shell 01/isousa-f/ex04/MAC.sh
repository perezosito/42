#!/bin/sh

ifconfig | grep "ether" | awk '{print $2}'

#ifconfig: muestra toda la info sobre las tarjetas de red

#grep: Busca líneas con el patrón "ether" (nombre de las tarjetas de red en Linux)
#awk: procesa el texto con el formato entre llaves.
#print: imprime el valor de "$2": la segunda columna

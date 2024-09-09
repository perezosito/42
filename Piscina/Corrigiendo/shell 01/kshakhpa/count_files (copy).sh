#! /bin/bash
find . | wc -l
# find: finds
# . : sets current directory
# -mindepth 1: stops the directory from counting itself (explicitly removed from the task)
# | wc -l: counts the number of lines in the result 

#!/bin/sh
# busca todos los dir + files. También el . (dir actual)
# wc -l   cuenta los elementos: dir más files
find . -type f -o -type d | wc -l

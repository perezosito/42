#! /bin/bash
ls -l | awk 'NR % 2 == 1'
# ls -l : list files
# awk : process text
# NR % 2 : take every second line
# == 0 : starting point - line 1

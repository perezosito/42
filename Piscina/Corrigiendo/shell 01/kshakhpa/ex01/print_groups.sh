#!/bin/bash
id -nG $FT_USER | tr ' ' ','| tr -d '\n'
# id : calls the user ID
# -n : prints the group name not number
# -G : prints all groups ID's
# | tr ' ' ',' : replaces space with the comma
# | tr -d '\n' : chops off whatever is left at the end and adds a new line

#! /bin/bash
clear
ifconfig -a | grep -ioE '([a-f0-9]{2}:){5}([a-f0-9]{2})'
# clear : let us have a nice clean screen
# ifconfig : displays all the network interfaces data
# grep : finds the line with the template
# -i : ignores case
# -o : only matching
# -E : look for pattern, not sure if need upper case
# '' : use this pattern
# a-f0-9 : limit to hexadecimals
# {2} : 2 items
# : : followed by the colon
# (){5} : do it 5 times
# ([a-f0-9]{2}) : 2 more hexadecimals

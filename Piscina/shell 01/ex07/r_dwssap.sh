cat /etc/passwd | head -n $FT_LINE2 | tail -n +$FT_LINE1 | awk -F: '{print $1}' | sed -n 'n;p' | rev | sort -r | awk '{printf "%s%s", sep, $0; sep=", "} END {print "."}'

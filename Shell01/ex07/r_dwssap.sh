cat /etc/passwd | egrep -v '^(#.*)?$' | awk 'NR%2==0{ print }' | sed "s/:*:.*$//g" | rev | sort -r | sed -n '$FT_LINE1, $FT_LINE2p' | tr "\n" "," |  sed "s/,/, /g" |  sed 's/, $/./g'

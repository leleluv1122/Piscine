cat /etc/passwd | egrep -v '^(#.*)?$' | awk 'NR%2==0{ print }' | sed "s/:*:.*$//g" | rev | sort -r | sed -n '7, 15p' | tr "\n" "," |  sed "s/,/, /g" |  sed 's/, $/./g'

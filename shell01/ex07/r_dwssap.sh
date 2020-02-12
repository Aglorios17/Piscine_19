cat /etc/passwd | grep -v '#*' | sed -n '2d; n; p' | cut -f1 -d ':' | rev | sort -d -r | awk -v f1=$FT_LINE1 -v f2=$FT_LINE2 'NR>=f1 && NR<=f2' | tr ' ' ',' | sed 's/,$/./'

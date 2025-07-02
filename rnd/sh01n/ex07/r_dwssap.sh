cat /etc/passwd | grep -v '^#' | awk '(NR-1)%2==0' | cut -d: -f1 | rev | sort -r | head -n 15 | tail -n +7 | tr '\n' ', ' | sed 's/,/, /g' | sed 's/.\{3\}$/./' | tr -d '\n'

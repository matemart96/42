find -name "*.sh" | awk '{print substr($0, 3)}' | awk -F '.' '{print $1}'

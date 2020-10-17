find . -type f -exec basename {} \; | sed -e 's/\.sh$//'

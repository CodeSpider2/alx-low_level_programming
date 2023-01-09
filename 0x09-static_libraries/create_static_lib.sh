#!/bin/bash

# Compile all .c files to .o files
for file in *.c; do
    gcc -c "$file"
done

# Create static library from .o files
ar rcs liball.a *.o

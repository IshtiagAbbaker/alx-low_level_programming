#!/bin/bash

# Compile all .c files into object files
gcc -c *.c -fPIC

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up intermediate object files
rm *.o


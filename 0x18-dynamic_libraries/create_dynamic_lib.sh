#!/bin/bash
gcc -Werror -Wall -Wextra -pedantic -c -fPIC *.c
gcc -shared -o 100-operations.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

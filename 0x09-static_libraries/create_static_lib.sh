#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
ar -re liball.a *.o
ranlib liball.a

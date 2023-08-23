#!/bin/bash
gcc -Wall -pedantic -Werror -C *.c
ar -rc liball.a *.o
ranlib liball.a

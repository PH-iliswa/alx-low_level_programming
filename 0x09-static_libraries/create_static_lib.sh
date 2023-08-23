#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -C *.c
ar -rc liball.a *.o
ranlib liball.a

#!/bin/bash
gcc -Wall -Wextra -Werror -pedanti -c *.c
ar rc liball.a *.o

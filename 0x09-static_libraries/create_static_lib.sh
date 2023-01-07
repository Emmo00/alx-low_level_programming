#!/bin/bash
gcc -o out.o -c *.c
ar rcs liball.a out.o

#!/bin/bash
gcc -o out.o -c *.c
ar rc liball.a out.o

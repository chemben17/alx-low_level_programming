#!/bin/bash
gcc -Wall -o *.c
ar -rc liball.a *.o
ranlib liball.a


#!/bin/bash
gcc -c *.c
ar -rc libmy.a *.o
runlib libmy.a

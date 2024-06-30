#!/bin/bash
printf 'Cleaning dist...\n'
rm -f `find bin -name "*.*"`
rm -f bin/app
printf 'Compiling...\n'
g++ -Wall src/main.cpp -c -o bin/obj/main.o
g++ -Wall src/linkedlist.cpp -c -o bin/obj/linkedlist.o 


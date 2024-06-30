#!/bin/bash
printf 'Cleaning dist...\n'
rm -f `find bin -name "*.*"`
rm -f bin/app
printf 'Compiling...\n'
g++ -Wall src/main.cpp -c -o bin/obj/main.o
g++ -Wall src/linkedlist.cpp -c -o bin/obj/linkedlist.o 
printf 'Assembling...\n'
g++ -o bin/app `find bin/obj -name "*.o"` 
printf 'Executing...\n\n'
chmod u+x bin/app
./bin/app


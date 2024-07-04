#!/bin/bash

if [ ! -d bin ]; then
	mkdir bin 
fi
if [ ! -d bin/obj ]; then 
	mkdir bin/obj
fi

rm -f `find bin -name "*.*"`
rm -f bin/app

g++ -c -Wall -I src/includes -o bin/obj/main.o src/main.cpp  
g++ -c -Wall -I src/includes -o bin/obj/linkedlist.o src/linkedlist.cpp 

g++ -o bin/app `find bin/obj -name "*.o"` 

chmod u+x bin/app
./bin/app


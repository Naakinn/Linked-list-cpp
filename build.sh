#!/bin/bash
printf 'Assembling...\n'
g++ -o bin/app `find bin/obj -name "*.o"` 


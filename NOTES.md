> g++  -std=c++11  -I /usr/local/include  -lboost_program_options   main.cpp -o main

> pre-process of c code on windows

> cl main.c /P  # will generate a main.i file

> cl main.c /P  /C /EP  C means keep comments, EP serpress hash lines

> linux use gcc to generate preprocess file 

> gcc +e main.c -o main.s

> gcc main.c -o main -Wall
> gcc main.c -o main -Wall -std=c99
> gcc main.c multiply.c -o main  -Wall -std=c99  -Wextra -pedantic


## install mingw

> nuwen.net 

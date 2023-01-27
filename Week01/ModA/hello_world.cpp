#include <iostream>

int main() {
    std :: cout << "Hello World" << std :: endl;
    return 0;
}

// compiling: c++ hello_world.cpp -o hello -std=c++14
// g++/c++ nameOfFile stdout=versionOfc++

/* 
can break compiling/linking into separate tasks:
    c++ -c hello_world.cpp hello.o -std=c++14
    c++ hello.o -o hello
    ./hello
*/

/*
Debugging: 
    c++ -c -g hello_world.cpp hello.o -std=c++14
    c++ -g hello.o -o hello
    gdb ./hello
*/  
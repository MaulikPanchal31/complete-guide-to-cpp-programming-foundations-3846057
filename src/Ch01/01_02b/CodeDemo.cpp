// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
/* > Below inclusion is optional depending on Compiler
   > Chain of includes: iostream => istream => ostream => ios => xlocknum => cstdio
   > The cstdio is C++ wrapper of stdio.h */
#include <cstdio>

// This is my Hello World program in C++
// It starts with function 'main'
int main(int argc, char* argv[]){ 
    printf("Hello C World!\n\n");
    std::cout << "I am from C++ World!" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}
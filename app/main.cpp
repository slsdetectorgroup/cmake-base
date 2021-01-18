/* This is a program that uses a library */

#include "psi/Adder.h"
#include <iostream>

int main(){
    std::cout << "Hello World!\n";

    psi::Adder a;
    std::cout << "3 + 4 = " << a.add(3,4) << "\n";
}
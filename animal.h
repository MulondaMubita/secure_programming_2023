/**
 * ID:790980/10/1
 * Name:MULONDA
 * Last Name:MUBITA
 * Course:Secure Programming
 * Program:Compter Science
 * Term: three
 * Year: second year
 * Issued: 1/April/2023
 * filename: main.cpp
 */
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

// Animal Interface
class Animal
{
    friend std::ostream &operator<<(std::ostream &out, Animal &oparand);

public:
    virtual void print_info(std::ostream &out) = 0;
    // change nothing above this
    // your code goes below this
};

#endif // ANIMAL_H

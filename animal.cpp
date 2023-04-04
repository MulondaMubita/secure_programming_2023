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
#include <iostream>
#include "animal.h"
class person
{
public:
    int age;
    std::string first_Name;
    std::string last_Name;
    std::string marital_status;
    std::string occupation_name;

    void occupation()
    {
    }
};

class student
{
public:
};

int main()
{
    person attributes;
    attributes.occupation();
}

std::ostream &operator<<(std::ostream &out, Animal &oparand)
{
    oparand.print_info(out);
    return out;
};

#include "Class.hpp"

Class::Class(int a, int b)
{
    i = a;
    j = b;
};

int Class::subtract()
{
    return i - j;
};

int Class::add()
{
    return i + j;
};

SecondClass::SecondClass(int a, int b, int c) : Class(a, b)
{
    k = a;
    i = b;
    j = c;
};
int SecondClass::sumAll()
{
    return i + j + k;
};
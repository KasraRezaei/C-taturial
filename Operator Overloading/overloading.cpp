#include "overloading.hpp"
// syntax for overloading an operator
// return_type operator<symbol>(parameter_list\)

MyInteger::MyInteger(int x)
{
    this->i = x;
}

int MyInteger::Value()
{
    return i;
}

MyInteger MyInteger::operator+(MyInteger m)
{

    // returning the sum of the two integers
    // this objec's(current) i + m objects i
    return this->i + m.i;
}

int MyInteger::operator-(MyInteger m)
{
    // returning the difference of the two integers
    // this objec's(current) i - m objects i
    return this->i - m.i;
}
int doublicate(MyInteger m)
{
    // returning the double of the integer
    // this objec's(current) i * 2
    return m.i + m.i;
}
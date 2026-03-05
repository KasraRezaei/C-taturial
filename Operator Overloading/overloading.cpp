#include "overloading.hpp"
// syntax for overloading an operator
// return_type operator<symbol>(parameter_list\)

MyInteger::MyInteger(int x)
{
    this->i = x;
}
MyInteger::MyInteger(void)
{
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

int MyInteger::operator-(int i)
{
    // returning the difference of the two integers
    // this objec's(current) i - m objects i
    return this->i - i;
}
int doublicate(MyInteger m)
{
    // returning the double of the integer
    // this objec's(current) i * 2
    return m.i + m.i;
}

int operator+(int a, MyInteger m)
{
    // returning the sum of the integer and the MyInteger object
    // a + m objects i
    return a + m.i;
}
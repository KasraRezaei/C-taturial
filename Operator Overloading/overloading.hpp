#ifndef OVERLOADING_HPP
#define OVERLOADING_HPP
class MyInteger
{
    int i;

public:
    MyInteger(int x);
    int Value();
    // operator overloding definition as a memeber of the class
    // type(MyInteger) , + , parameter list(MyInteger)
    MyInteger operator+(MyInteger);
    int operator-(MyInteger);
};
#endif
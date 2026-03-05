#ifndef OVERLOADING_HPP
#define OVERLOADING_HPP
class MyInteger
{
    int i;

public:
    MyInteger(int x);
    MyInteger(void); // default constructor
    int Value();
    // operator overloding definition as a memeber of the class
    // type(MyInteger) , + , parameter list(MyInteger)
    MyInteger operator+(MyInteger);
    int operator-(int);
    friend int doublicate(MyInteger);
    friend int operator+(int, MyInteger);
};

int doublicate(MyInteger m);
#endif
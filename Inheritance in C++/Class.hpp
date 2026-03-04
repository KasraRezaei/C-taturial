#ifndef CLASS_HPP
#define CLASS_HPP

class Class
{
protected:
    int i;
    int j;

public:
    Class(int a, int b);
    int subtract();
    int add();
};

class SecondClass : public Class
{
    int k;

public:
    SecondClass(int a, int b, int c);
    int sumAll();
};

#endif
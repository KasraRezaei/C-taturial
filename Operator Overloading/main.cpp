#include "overloading.hpp"
#include <iostream>
using namespace std;
int main()
{
    MyInteger m1(10);
    MyInteger m2(30);
    MyInteger sum = m1 + m2; // this will call the overloaded + operator
    cout << "m1: " << m1.Value() << endl;
    cout << "m2: " << m2.Value() << endl;
    cout << "The sum of m1 and m2 is: " << sum.Value() << endl;

    int difference = sum.Value() - m1.Value(); // this will call the overloaded - operator
    cout << "The difference of sum and m1 is: " << difference << endl;

    cout << "The double of m1 is: " << doublicate(m1) << endl; // this will call the friend function doublicate
    return 0;
}
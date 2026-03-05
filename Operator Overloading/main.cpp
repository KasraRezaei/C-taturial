#include "overloading.hpp"
#include <iostream>
using namespace std;
int main()
{
    MyInteger m1(10);
    MyInteger m2(30);
    MyInteger m3;
    m3 = m1 + m2; // this will call the overloaded + operator
    cout << "m1: " << m1.Value() << endl;
    cout << "m2: " << m2.Value() << endl;
    cout << "m3: " << m3.Value() << endl;
    cout << "m1 + m2: " << m3.Value() << endl;

    int difference;
    difference = m3 - m1.Value(); // this will call the overloaded - operator
    cout << "m3 - m1: " << difference << endl;

    cout << "The double of m1 is: " << doublicate(m1) << endl; // this will call the friend function doublicate

    MyInteger m4;
    m4 = 20 + m1; // this will call the friend function operator+ with int and MyInteger as parameters
    cout << "m4: " << m4.Value() << endl;
    cout << "20 + m4: " << m4.Value() << endl;
    return 0;
}
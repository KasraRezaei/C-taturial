#include "Class.hpp"
#include <iostream>
using namespace std;

int main()
{
    Class c(10, 2);
    int sum = c.add();
    int difference = c.subtract();
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difrence: " << difference << std::endl;
    SecondClass sc(5, 10, 2);
    int secondSum = sc.add();
    int seconddif = sc.subtract();
    cout << "Second Sum: " << secondSum << endl;
    cout << "Second Difference: " << seconddif << endl;
    int sumAll = sc.sumAll();
    cout << "Sum All: " << sumAll << endl;
    return 0;
}
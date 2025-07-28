//
//  main.cpp
//  C++taturial
//
//  Created by Kasra Rezaei on 18/07/2025.
//
#include <iostream>
#include "VirtualFunction.hpp"
int main()
{
    Animal animal;
    animal.move();
    
    Fish fish;
    fish.move();
    
    Dog dog;
    dog.jump();
    std::unique_ptr<Fish>fishNo1;   //pointer type Fish named fishno1
    fishNo1 = std::make_unique<Fish>(); //create a fish object and pass to pointer
    doSomthing(fishNo1.get()); // call the pointer
    fishNo1->move();
}


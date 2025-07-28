//
//  VirtualFunction.hpp
//  C++taturial
//
//  Created by Kasra Rezaei on 28/07/2025.
//

#ifndef VirtualFunction_hpp //macros: making sure it checks the hpp file just once
#define VirtualFunction_hpp

#include <stdio.h>

class Animal
{
public:
    virtual void move();
};

class Fish : public Animal
{
public:
    void move() override;
};

class Dog : public Animal
{
public:
    void move() override;
    void jump();
};

void doSomthing(Animal* an);


#endif /* VirtualFunction_hpp */

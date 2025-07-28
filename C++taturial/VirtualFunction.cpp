//
//  VirtualFunction.cpp
//  C++taturial
//
//  Created by Kasra Rezaei on 28/07/2025.
//
#include <iostream>
#include "VirtualFunction.hpp"

void Animal::move()
{
    std::cout <<"I'm moving"<< std::endl;
}

void Fish::move()
{
    std::cout <<"I'm swimming"<< std::endl;
}

void Dog::move()
{
    std::cout <<"I'm chasing"<< std::endl;
}

void Dog::jump()
{
    std::cout <<"Jumping"<< std::endl;
}

void doSomthing(Animal* an)
{
    if (an)
    {
        an->move();
    } else {
        std::cout <<"There is no animal"<< std::endl;
    }

}


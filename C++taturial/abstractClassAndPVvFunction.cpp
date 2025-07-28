//
//  abstractClassAndPVvFunction.cpp
//  C++taturial
//
//  Created by Kasra Rezaei on 28/07/2025.
//
//#include <iostream>
//
//class Animal
//{
//public:
//    virtual void move() = 0;   // makes the animal class an abstract class and any inhareted method loike move must be defined in the inhireted classes
//    virtual void eat(){std::cout <<"I'm eating"<< std::endl;}
//};
//
//class Horse : public Animal
//{
//public:
//    void move() {std::cout <<"I'm galloping"<< std::endl;}  // must diffine move here
//};
//
//class Human : public Animal
//{
//public:
//    void move() {std::cout << "I'm running" << std::endl;}
//    void eat() override {std::cout <<"I'm chomping"<< std::endl;}
//};
//
//class Baby : public Human
//{
//    
//};
//
//int main()
//{
//    Horse horse;
//    horse.move();
//    
//    
//    Baby baby;
//    baby.move(); // inherits from human and don't need to diffine move anymore
//    baby.eat();
//}

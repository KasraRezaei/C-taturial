//
//  InheritantAndPointer.cpp
//  C++taturial
//
//  Created by Kasra Rezaei on 23/07/2025.
//
//#include <iostream>
//
////===================================================
//
//class Animal
//{
//public:
//    virtual void move()
//    {
//        std::cout<< "I'm moving" <<std::endl;
//    };
//};
//
//class Fish : public Animal
//{
//public:
//    void move() override
//    {
//        std::cout<< "I'm swimming" <<std::endl;
//    };
//};
//
//class Dog : public Animal
//{
//public:
//    void move() override
//    {
//        std::cout<< "I'm running!" <<std::endl;
//    };
//};
//
//void doSomthing(Animal* animal) // smart pointer
//{
//    if (animal != nullptr)
//    {
//        animal->move();
//    } else {
//        std::cout<< "There is no animal" <<std::endl;
//    }
//}
//
//
//int main()
//{
//    std::unique_ptr<Dog>dog;  // creating a fish pointer
//    dog = std::make_unique<Dog>(); // creating an instant for the pointer
//    doSomthing(dog.get());
//}

#ifndef STACK_HPP
#define STACK_HPP

#define SIZE 100

// define the Stack class
class Stack
{
    // private members of the Stack class
    int stack[SIZE]; // array to hold the stack elements
    int index;

public:
    Stack() : index(0) {} // constructor
    // function prototypes for the Stack class
    void push(int);
    int pop(void);
};

#endif
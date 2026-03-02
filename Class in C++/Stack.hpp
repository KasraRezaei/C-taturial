#ifndef STACK_HPP
#define STACK_HPP

#define SIZE 100
// #define index 0

// define the Stack class
class Stack
{
    // private members of the Stack class
    int stack[SIZE]; // array to hold the stack elements
    int index;

public:
    // Stack() : index(0) {} // constructor
    // function prototypes for the Stack class
    void push(int);
    int pop(void);
};
Stack ::Stack() : index(0) {} // constructor

#endif
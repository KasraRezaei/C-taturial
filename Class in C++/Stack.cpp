#include "Stack.hpp"
#include <iostream>

// Push an element onto the stack
void Stack::push(int value)
{
    if (index >= SIZE)
    {
        std::cerr << "Stack overflow\n";
        return;
    }

    stack[index] = value;
    index++;
}

// Pop an element from the stack
int Stack::pop(void)
{
    if (index <= 0)
    {
        std::cerr << "Stack underflow\n";
        return -1; // error value
    }

    index--;
    return stack[index];
}
#include "Stack.hpp"
#include <stdio.h>
int main()
{
    Stack s1;
    int value;
    s1.push(10);
    s1.push(20);
    value = s1.pop();
    printf("Popped value: %d\n", value);
    return 0;
}
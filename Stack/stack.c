#include "stack.h"

int main(){
    STACK *stack = NULL;

    printStack(stack);
    stack = push(stack, "Hello");
    printStack(stack);
    stack = push(stack, "World");
    printStack(stack);

    char c = pop(stack);

    emptyStack(stack);
    return 0;
}

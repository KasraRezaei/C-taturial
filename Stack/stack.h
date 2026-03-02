/* • stack.h
• #include-s any .h files needed by stack.c
• defines structures, typedefs etc
• defines function prototypes (push, pop, printStack, emptyStack)
• is #include-ed into any program that wants to use the stack functionality
*/

#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>
/* structure definitions */
struct stackStruct
{
    // char data;
    // struct stackStruct *next;
    void *data; // can take any data ever STACK type
    struct stackStruct *nextElem;
};
typedef struct stackStruct STACK;

/* functions prototypes */
extern STACK *push(STACK *, void *data);
extern void *pop(STACK **);
extern void print_stack(STACK *);
extern void emptyStack(STACK **);

#endif
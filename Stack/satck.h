/* • stack.h
• #include-s any .h files needed by stack.c
• defines structures, typedefs etc
• defines function prototypes (push, pop, printStack, emptyStack)
• is #include-ed into any program that wants to use the stack functionality
*/

/* structure definitions */
#include <stdio.h>

struct stactStruct
{
    char data;
    struct stactStruct *next;
} typedef struct stactStruct STACK;

/* functions prototypes */
extern STACK *puch(STACK *, char);
extern char *pop(STACK **);
extern void print(STACK *);
extern void emptyStack(STACK **);

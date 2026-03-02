#include "stack.h"
#include <stdio.h>


// struct stackStruct
// {
//     char data;
//     struct stackStruct *next;
// };
// typedef struct stackStruct STACK;

int main(){
    STACK *mystack = NULL;
    char *c = malloc(sizeof(char));
    *c = 'A';
    char *b = malloc(sizeof(char));
    *b = 'B';
    mystack = push(mystack, c);
    mystack = push(mystack, b);
    // mystack = push(mystack, 'A');
    print_stack(mystack);
    char *h = pop(&mystack);
    printf("Popped: %c\n", *h);
    print_stack(mystack);

    emptyStack(&mystack);
    if(mystack == NULL){
        printf("Stack is empty\n");
    }

}
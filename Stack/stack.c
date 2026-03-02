#include "stack.h"

struct stackStruct{
    // char data;
    // arbitrary
    void *data; // can take any data ever STACK type
    struct stackStruct *nextElem;
};

// typedef struct stackStruct STACK;


STACK *newNode(char data){
    STACK *new;
    if(!(new = (STACK *)malloc(sizeof(STACK)))){
        printf("Error\n");
    }
    new->data = &data;
    new->nextElem = NULL;
    return new;
}

void print_stack(STACK *stack){
    STACK *current = stack;
    while (current !=NULL)
    {   
        char c = *(char *)current->data;
        printf("Node = %c\n", c);
        current = current->nextElem;
    }
    printf("\n");

}

STACK *push(STACK *s, void *data){
    STACK *new = malloc(sizeof(STACK));
    if (!new) exit(1);

    //char *heapData = malloc(sizeof(char));  // allocate memory
    //if (!heapData) exit(1);

    //*heapData = data;
    new->data = data;
    new->nextElem = s;
    return new;
}

void *pop(STACK **s){
    if (*s == NULL) return NULL;
    STACK *tmp = *s;
    void *data = tmp->data;
    *s = tmp->nextElem;
    free(tmp);
    return data;
}

void emptyStack(STACK **s){
    while (*s)
    {
        free((*s)->data);  
        pop(s);  
    }
    
}
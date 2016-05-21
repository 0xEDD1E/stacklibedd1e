/**
 * Stack Implementation using an Array
 * Written by 0xEDD1E
 * 2016.05.21
 */

/*
typedef struct stack_array {
    int *stack;         // integer array for the stack, should be dynamically allocated.
    int maxsize;        // maxsize of the stack, size of the array
    int size;           // current size of the array, current index of the stack
} Stack_array;
*/

#include "stack_array.h"
#include <stdlib.h>

Stack_array *initializeStack_array(int maxsize) 
{
    Stack_array *new_Stack = (Stack_array *) malloc(sizeof(Stack_array));
    
    if ((new_Stack->stack = malloc((size_t) maxsize * sizeof (int))) == NULL)
        return NULL;    // allocation failure
    
    new_Stack->maxsize = maxsize; 
    new_Stack->size = -1;   // -1 is an indicator of Stack Emptiness
    
    return new_Stack;
}

int pushStack_array(Stack_array *pstack, int pval)
{
    if (pstack->size == pstack->maxsize)
        return 0;   // stack overflow, send the signal
    
    pstack->stack[++pstack->size] = pval; // push onto stack
    return 1;   // push success, send signal
}

int popStack_array(Stack_array *ppstack)
{
    if (ppstack->size == -1)
        return 0;   // stack underflow, send the signal, 
                    // however 0 can't be considered as a proper signal
                    // when the stack elements are integers (or floatings)
                    // I can't see any other way to handle this other than
                    // calling fprintf(stderr,...) or exit(), which seems to be
    				// more rough
    
    int popped = ppstack->stack[ppstack->size];
    ppstack->size--; // move the top array index back one step
    
    return popped;
}

int peekStack_array(Stack_array *pkstack)
{
    if (pkstack->size == -1)
        return 0;   // stack underflow, send the signal
    
    return pkstack->stack[pkstack->size];
}



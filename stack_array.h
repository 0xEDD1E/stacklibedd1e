#ifndef STACK_ARRAY_HEADER
#define STACK_ARRAY_HEADER 

typedef struct stack_array {
    int *stack;         // integer array for the stack, should be dynamically allocated.
    int maxsize;        // maxsize of the stack, size of the array
    int size;           // current size of the array, current index of the stack
} Stack_array;

Stack_array *initializeStack_array(int maxsize);
int pushStack_array(Stack_array *pushStack, int pushVal);
int popStack_array(Stack_array *popStack);
int peekStack_array(Stack_array *peekStack);

#endif
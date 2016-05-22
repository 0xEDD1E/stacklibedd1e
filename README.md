# stacklibedd1e (libstack) V1.0
Handwritten Stack library in C
I wrote this Stack Library for my ease. And I'm trying to extend and develop this library more.

#### Implemetation
Stacks provided by this library is implemented as Linked Lists.
This linked list stack can be obtained by `stack.h` header. (with `stack.c`)
And there is an array based stack too. It can be obtained by `stack_array.h` (with `stack_array.c`)

#### Supported Types
Currently (`V1.0`) this library only supports for integer(`int`) data type.

#### Supported Operations
This version(`V1.0`) supports 3 stack operations 1 non-stack operation

##### stack operations
+ `push` *push to the stack*
+ `pop` *pop from the stack*
+ `peek` *peek the stack*

##### non-stack operations
+ `initializeStack()` *initializing a stack*

#### Stack Representaion

##### Linked List
Linked List based Stack is defined as follow:
```c
typedef struct stack_lnklst {
  int key;
  struct stack_lnklst *next;
} Stack;
```

##### Array
Array based Stack is defined as follow:
```c
typedef struct stack_array {
    int *stack;         
    int maxsize;        
    int size;           
} Stack_array;
```

#### Library Functions

+ `Stack *initializeStack(void)`  
   + This function simply initializes a stack.
   + Usage : `Stack *myStack = initializeStack();`

+ `int push(Stack **head, int pval)`  
   + This function is used to push values onto the stack.
   + stack (*the address of the stack*), and value to push are taken as  
     function arguments
   + returns `PUSH_OK` on success, `PUSH_FAIL` on failure
   + Usage : `push( &myStack, valuetopush )`

+ `int pop(Stack **head)`
   + This function is used to pop values from the stack
   + stack (*the address of the stack*) is taken as function arguments
   + returns the popped value, and `0` on a failure (although it is a bad signal)
   + Usage: `pops = pop( &myStack );`

+ `int peek(Stack *head)`
   + This function is used to peek at the stack
   + stack (*__NOT__ the address*) is taken as function argument
   + returns the top value, and `0` on a failure (although it is a bad signal) 
   + Usage : `peeks = peek( myStack );`

Functions for Array based stacks are similar to these functions, except they are suffixed by `Stack_array` and not need to provide the address of the stack.

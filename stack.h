#ifndef STACK_LNKLST_HEADER
#define STACK_LNKLST_HEADER

typedef struct stack_lnklst {
	int key;					// key of the stack element
	struct stack_lnklst *next;  // next element
} Stack;

Stack *initializeStack(void);
int push(Stack **head, int pval);
int pop(Stack **head);
int peek(Stack *head);

#endif

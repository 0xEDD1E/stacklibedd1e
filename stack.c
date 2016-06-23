/**
 * Stack Implementation using a Linked List
 * Written by 0xEDD1E
 * 2016.05.21
 */

/*
typedef struct Stack {
	int key;	     // key of the stack element
	struct Stack *next;  // next element
} Stack;
*/

#include <stdlib.h>
#include "stack.h"

Stack *initializeStack(void)
{
	return NULL;
}

int push(Stack **head, int pval)
{
	Stack *new_Stack = (Stack *) malloc(sizeof (Stack));

	if (new_Stack == NULL)
		return PUSH_FAIL;    // allocation failure

	new_Stack->key = pval;
	new_Stack->next = (*head);
	(*head) = new_Stack;

	return PUSH_OK;
}

int pop(Stack **head)
{
	if (*head == NULL)
		return 0;   // stack underflow, send the signal,
                // however 0 can't be considered as a proper signal
                // when the stack elements are integers (or floatings)
                // I can't see any other way to handle this, other than
                // calling fprintf(stderr,...) or exit(), which seems to be
                // more rough

	int popped = (*head)->key;
	Stack *del = (*head);
	(*head) = (*head)->next;

	free(del);

	return popped;
}

int peek(Stack *head)
{
	if (head == NULL)
		return 0;   // stack underflow, send the signal

	return head->key;
}

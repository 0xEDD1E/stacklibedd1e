#include <stdio.h>
#include "stack.h"

int main(void)
{
	Stack *this_stack = initializeStack();

	for (int i = 0; i < 6; i++)
		push(&this_stack, i);

	printf("%d ", peek(this_stack));
	printf("%d ", pop(&this_stack));
	printf("%d ", peek(this_stack));
	printf("%d ", pop(&this_stack));
	printf("%d ", peek(this_stack));

	return 0;
}

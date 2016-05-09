/**
 * Stack Implementation using Singly Linked List
 * Author: 0xEDD1E (codemaster.eddie@gmail.com)
 * Date: 2016 05 08
 * Programmed in C (c11)
 */

/* representation of stack element of type integer `int` */
typedef struct stack_elem_int {
	int key;
	struct stack_elem_int *next;
} StackINT;

/* representation of stack element of type `long long` */
typedef struct stack_elem_longlong {
	long long key;
	struct stack_elem_longlong *next;
} StackLL;

/* representation of stack element of type double `double`*/
typedef struct stack_elem_double {
	double key;
	struct stack_elem_double *next;
} StackDBL;

/**
 * pushINT(StackINT **, int) : int
 * pushes an integer key to the stack.
 * can be used to store char, short, int data.
 * `char` and `short` are promoted to `int`
 *
 * returns:
 *		0 for sucessfull push
 *		1 for bad memory allocation
 *
 */
int pushINT(StackINT **head, int key)
{

}

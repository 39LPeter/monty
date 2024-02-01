#include "monty.h"
/**
*The integer stored in each element of the stack is treated as the ascii value of the character to be printed
*The string stops when either:
*the stack is over
*the value of the element is 0
*the value of the element is not in the ascii table
*If the stack is empty, print only a new line
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

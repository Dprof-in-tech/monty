#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *prev;
	size_t b = 0;

	(void) line_number;
	prev = *stack;
	if (prev == NULL)
		return;

	while (prev != NULL)
	{
		printf("%d\n", prev->n);
		prev = prev->next;
		b++;
	}
}

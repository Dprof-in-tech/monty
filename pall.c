#include "monty.h"

/**
 * pall - Function to retrieve the number of stack memebers
 * @stack: defined stack
 * @line_number: stack memebber posituion
 *
 * Return: Always 0
 */

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

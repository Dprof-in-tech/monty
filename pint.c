#include "monty.h"

/**
 * pint - Function to print the element at the stack top
 * @stack: stack defined
 * @line_number: lineof opcode
 *
 * Return: Always 0
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *prev;

	(void) line_number;
	prev = *stack;
	if (prev ==  NULL)
	{
		dprintf(2, "L%u: can't pint,stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", prev->n);
}

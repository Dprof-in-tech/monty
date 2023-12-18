#include "monty.h"

/**
 * mod - Function to divide members of stack
 * @stack: defined stack
 * @line_number: opcode line number
 *
 * Return: Always success 0
 */

void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *next;
	(void) line_number;

	top = *stack;
	next = top->next;

	if (top == NULL || top->next == NULL)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (top->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	next =top->next;
	next->n %= top->n;

	*stack = next;
	next->prev = NULL;

	free(top);
}

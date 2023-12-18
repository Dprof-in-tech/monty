#include "monty.h"

/**
 * sub - Function to subtract members of stack
 * @stack: defined stack
 * @line_number: opcode line number
 *
 * Return: Always success 0
 */

void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *next;
	(void) line_number;

	top = *stack;
	next = top->next;

	if (top == NULL || top->next == NULL)
	{
		dprintf(2, "L%u: can't sub, stack too short", line_number);
		exit(EXIT_FAILURE);
	}

	next =top->next;
	next->n -= top->n;
	*stack = next;
	next->prev = NULL;

	free(top);
}

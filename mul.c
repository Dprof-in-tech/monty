#include "monty.h"

/**
 * mul - Function to add memebers of a stack
 * @stack: defined stack
 * @line_number: opcode line number
 *
 * Return: Always Success 0
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *next;
	(void) line_number;

	top = *stack;

	if (top == NULL || top->next == NULL)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	next = top->next;
	next->n *= top->n;
	*stack = next;
	next->prev = NULL;

	free(top);
}

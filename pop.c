#include "monty.h"

/**
 * pop - Function that removes the top element of a stack
 * @stack: defined stack
 * @line_number = line of opcode
 *
 * Return: Always 0
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *prev;
	(void) line_number;

	prev = *stack;
	if (prev == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;

	free(prev);

}

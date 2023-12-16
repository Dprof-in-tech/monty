#include "monty.h"

/**
 * swap - Function to swap two memebers of a stack
 * @stack: defined stack
 * @line_number: opcode line number
 *
 * Return: Always success 0
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *next;
	(void) line_number;

	top = *stack;
	next = top->next;

	if (top == NULL || top->next == NULL)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", line_number);
		exit (EXIT_FAILURE);
	}

	top->prev = next;
	top->next = next->next;

	next->prev = NULL;
	next->next = top;

	*stack = next;
}

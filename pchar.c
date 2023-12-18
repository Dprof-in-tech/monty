#include "monty.h"

/**
 * pchar - Function to add memebers of a stack
 * @stack: defined stack
 * @line_number: opcode line number
 *
 * Return: Always Success 0
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void) line_number;

	top = *stack;

	if (top == NULL || top->next == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (top->n < 0 || top->n > 127)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", top->n);


	*stack = top->next;
	if (top->next != NULL)
		top->next->prev = NULL;

	free(top);
}

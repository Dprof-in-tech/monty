#include "monty.h"

/**
 * nop - Function that does nothing
 * @stack: defines stack
 * @line_number: opcode line_number
 *
 * Return: Always Success 0
 */

void nop(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void) line_number;

	top = *stack;

	free(top);
}

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
	(void) line_number;
	(void) stack;

	return;
}

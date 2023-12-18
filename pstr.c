#include "monty.h"

/**
 * pstr - Function to add memebers of a stack
 * @stack: defined stack
 * @line_number: opcode line number
 *
 * Return: Always Success 0
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	(void) line_number;

	top = *stack;

	while (top->n > 0 && top->n <= 127 && top->n != 0)
	{
		printf("%c", top->n);
		top = top->next;
	}
	printf("\n");
}

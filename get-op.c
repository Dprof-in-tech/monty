#include "monty.h"

/**
 * op_fun - Function to retrieve the op function
 * @string: the opcode string
 * @stack: the defined stack
 * @line_number: the opcode line number
 *
 * Return: Always success 0
 */

void (*op_fun(char *string))(stack_t **stack, unsigned int line_number)
{
	instruction_t code[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{NULL, NULL},
	};
	int i = 0;

	while (code[i].opcode != NULL)
	{
		if (strcmp(string, code[i].opcode) == 0)
			return(code[i].f);
		i++;
	}
	return (NULL);
}

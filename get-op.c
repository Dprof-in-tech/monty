#include "monty.h"

void (*op_fun(char *string))(stack_t **stack, unsigned int line_number)
{
	instruction_t code[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
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

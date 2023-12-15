#include "monty.h"

/**
 * push - Function to add element to top of stack
 * @stack: defined stack
 * @line_number: line number of stack member
 *
 * Return : Always 0 
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	if (global.line_cpy[1] == NULL)
	{
		free(new_node);
		dprintf(2, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (global.line_cpy[1][0] == '-')
	{
		i++;
	}

	while (global.line_cpy[1][i] != '\0')
	{
		if (!isdigit(global.line_cpy[1][i]))
		{
			free(new_node);
			dprintf(2, "L%u: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		i++;
	}

	new_node->n =  atoi(global.line_cpy[1]);
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}

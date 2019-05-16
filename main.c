#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
* op_nop - no action
* @stack: nope
* @line: nope
*/
void op_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
* main - exec Monty code
* @argc: number of command arguments
* @argv: vector of command arguments
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on fail
*/
int main(int argc, char *argv[])
{
	free_stack(stack);
	return(EXIT_SUCCESS)
}

void free_stack(stack_t *stack)
{
	stack_t *temp;

	while (stack != NULL)
	{
		temp = stack->next;
		free(stack);
		stack = temp;
	}
}

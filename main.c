#include "monty.h"

/**
* main - exec Monty code
* @argc: number of command arguments
* @argv: vector of command arguments
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on fail
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	mbuff(argv[1]);
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

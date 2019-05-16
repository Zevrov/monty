#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
* op_nop - no action
* @stack: nope
* @line: nope
*/
void op_nop(stack_t **stack, unsigned int line)
{ (void)stack, (void)line; }

/**
* main - exec Monty code
* @argc: number of command arguments
* @argv: vector of command arguments
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on fail
*/
int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
		fail_special(ARGS, NULL, 0);
	file = parse_open(argv[1]);
	while (parse_line(file) != -1)
		;
	fclose(file);
	list_free();
	return (EXIT_SUCCESS);
}

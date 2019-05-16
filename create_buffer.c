#include "monty.h"

/**
* create_buffer - creates the buffer to parse through files
* @file_name: name of the file
*/
int create_buff(char *file_name)
{
	char *str = NULL;
	char *command = NULL;
	unsigned int line = 1;
	size_t size = 0;
	stack_t *stack = NULL;
	FILE *file;

	file = fopen(file_name, "r");
	if (!file)
	{
		printf("Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	argument_container.file = file;
	argument_container.stack_queue = 1;
	while (getline(&str, &size, file) != -1)
	{
		argument_container.input = str;
		if (*str == '\n')
		{
				line++;
				continue;
		}
		command = strtok(str, "\n\t ");
		if (command == NULL)
		{
			line++;
			continue;
		}
		argument_container.arguments = strtok(NULL, "\n\t ");
		get_opcode(command, line, &stack);
		line++;
	}
	free_stack(&stack);
}

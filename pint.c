#include "monty.h"

/**
* op_pint - prints the value at the top of the stack,
* followed by a new line.
* @stack: the memory
* @line_number: the line
*/
void op_pint(stack_t **stack, unsigned int line_number);
{
	stack_t	*temp;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

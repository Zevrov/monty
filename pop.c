#include "monty.h"

/**
* op_pop - removes the top element of the stack. Still working on edge cases
* @stack: the memory
* @line_number: the line
*/
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL || stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
	if (*stack == NULL)
		return;
	(*stack)->prev = NULL;
}

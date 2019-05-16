#include "monty.h"
/**
* op_add - adds the top two elements of the stack,
* and combines them into one node.
* still working on edge cases
* @stack: the memory
* @line_number: the line
*/
void op_add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int sum = 0;

	if (!(*stack)->next || !*stack || !stack)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	sum = temp->n + temp->next->n;
	op_pop(stack, line_number);
	(*stack)->n = sum;
}

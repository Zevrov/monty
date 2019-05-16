#include "monty.h"
/**
* op_mul - multiplies the top two elements of the stack,
* and combines them into one node.
* @stack: the memory
* @line_number: the line
*/
void op_mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;
	int math = 0;

	if (!(*stack)->next || !*stack || !stack)
	{
		printf("L%d: can't sub, stack too short\n", line_number);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	math = temp->n * temp->next->n;
	op_pop(stack, line_number);
	(*stack)->n = math;
}

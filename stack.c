#include "monty.h"
/**
 * nasus - LIFO data also called a stack
 * @stack: the memory
 * @fresh: memory to be added to the stack
 */
void nasus(stack_t **stack, stack_t *fresh)
{
	fresh->n = atoi(argument_container.arguments);
	if (*stack == NULL)
	{
		*stack = fresh;
		fresh->next = NULL;
		fresh->prev = NULL;
	}
	else
	{
		(*stack)->prev = fresh;
		fresh->prev = *stack;
		fresh->next = NULL;
		*stack = fresh;
	}
}

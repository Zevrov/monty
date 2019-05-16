#include "monty.h"
/**
 * nasus - LIFO data also called a stack
 * @stack: the memory
 * @fresh: memory to be added to the stack
 */
void nasus(stack_t **stack, stack_t *fresh)
{
	fresh->n = atoi(argument_container.arguments);
	if (!*stack)
	{
		fresh->prev = NULL;
		fresh->next = NULL;
		*stack = fresh;
	}
	else
	{
		(*stack)->prev = fresh;
		fresh->next = *stack;
		fresh->prev = NULL;
		*stack = fresh;
	}
}

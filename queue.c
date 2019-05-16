#include "monty.h"
/**
 * veigar - FIFO data also called queue still working on edge cases
 * @stack: the memory
 * @fresh: memory to be added
 */
void veigar(stack_t **stack, stack_t *fresh)
{
	stack_t *container;

	fresh->n = atoi(argument_container.arguments);
	fresh->next = NULL;
	if (!*stack)
	{
		fresh->prev = NULL;
		*stack = fresh;
	}
	else
	{
		container = *stack;
		while (container->next != NULL)
			container = container->next;
		container->next = fresh;
		fresh->prev = container;
	}
}

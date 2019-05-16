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

/**
 * veigar - FIFO data also called queue
 * @stack: the memory
 * @fresh: memory to be added
 */
void veigar(stack_t **stack, stack_t *fresh)
{
	stack_t *container;

	fresh->n = atoi(argument_container.arguments);
	if (*stack == NULL)
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

/**
 * op_push - pushes integers to the stack or queue
 * @stack: the memory
 * @line_number: the line
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *fresh;

	if (!stack)
		exit(EXIT_FAILURE);
	if (!(isnum(argument_container.arguments)))
	{
		printf("L%u: usage: push integer\n", line_number);
		free_stack(stack);
		fclose(argument_container.file);
		exit(EXIT_FAILURE);
	}
	fresh = malloc(sizeof(stack_t));
	if (!fresh)
	{
		printf("Error: malloc failed\n");
		free_stack(stack);
		fclose(argument_container.file);
		exit(EXIT_FAILURE);
	}
	if (argument_container.stack_queue)
		nasus(stack, fresh);
	else
		veigar(stack, fresh);
}

#include "monty.h"

/**
 *
 *
 */
int isnum(char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	if (*str == '-')
		str++;
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 *
 *
 *
 */
void nasus(stack_t **stack, stack_t *new)
{
	new->n = atoi(argument_container.arguments);
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*stack = new;
	}
	else
	{
		(*stack)->prev = new;
		new->next = *stack;
		new->prev = NULL;
		*stack = new;
	}
}

void veigar(stack_t **stack, stack_t *new)
{
	stack_t *container;

	new->n = atoi(argument_container.arguments);
	if (*stack == NULL)
	{
		new->prev = NULL;
		*stack = new;
	}
	else
	{
		(*stack)->prev = new;
		new->next = *stack;
		new->prev = NULL;
		*stack = new;
	}
}

void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *fresh;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	if (!(isnum(argument_container.arguments)))
	{
		printf("L%u: usage: push integer\n", line_num);
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	fresh = mallc(sizeof(stack_t));
	if (!fresh)
	{
		printf("Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}
	if (argument_container.stack_queue)
		nasus(stack, fresh);
	else
		veigar(stack, fresh);
}







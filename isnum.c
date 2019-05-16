#include "monty.h"

/**
 * is_num - checks if something is a number
 * @str: the string being checked
 * Return: 0 if num, 1 if not
 */
int is_num(char *str)
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

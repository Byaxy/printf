#include "holberton.h"

/**
 * get_func - returns needed function
 * @i: function identifier
 * Return: pointer to required function
 */

static int (*get_func(const char *format))(va_list)
{
	unsigned int x;

	print keys[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};

	while (keys[x].id != '\0')
	{
		if (keys[x].id == *format)
		{
			return (keys[x].func);
		}
		x++;
	}

	return (NULL);
}

#include "holberton.h"

/**
 * get_func - returns needed function
 * @i: function identifier
 * Return: pointer to required function
 */

char* (*get_func(char i))(va_list)
{
	int x = 0;

	print keys[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_i},
		{'b', itob},
		{'R', rot13},
		{'r', rev_string},
		{'o', itoOctal},
		{'\0', NULL}
	};

	while (keys[x].id != '\0')
	{
		if (keys[x].id == i)
		{
			return (keys[x].func);
		}
		x++;
	}

	return (NULL);
}

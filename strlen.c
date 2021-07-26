#include "holberton.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i;

	while (*(s + i))
	{
		i++;
	}

	return (i);
}

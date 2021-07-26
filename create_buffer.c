#include "holberton.h"

/**
 * create_buffer - creates buffer to hold string for printing
 * Return: pointer to created buffer
 */

char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		return (NULL);
	}

	return (buffer);
}

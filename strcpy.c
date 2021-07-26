#include "holberton.h"

/**
 * _strcpy - copy string
 * @dest: destination file
 * @src: source file
 * Return: coppied string
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = src[x];
	return (dest);
}

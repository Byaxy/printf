#include "holberton.h"

/**
 * print_R - print string in rot13
 * @R: string input
 * Return: number of characters printed
 */

int print_R(va_list R)
{
	char *str;
	int count = 0;
	unsigned int i, j;
	char l1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char l2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; l1[j]; j++)
		{
			if (l1[j] == str[i])
			{
				_putchar(l2[j]);
				count++;
				break;
			}
		}
		if (!l1[j])
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

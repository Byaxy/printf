#include "holberton.h"

/**
 * p_hex - prints a char's ASCII value in uppercase hexadecimal
 * @c: char to print
 * Return: number of chars printed
 */

static int p_hex(char c)
{
	int count;
	char diff = 'A' - ':';
	char a[2];

	a[0] = c / 16;
	a[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (a[count] >= 10)
			_putchar('0' + diff + a[count]);
		else
			_putchar('0' + a[count]);
	}
	return (count);
}

/**
 * print_S - prints a string and nonprintable ascii value
 * @S: string to print
 * Return: number of chars printed
 */

int print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str;

	str = va_arg(S, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += p_hex(str[i]);
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}

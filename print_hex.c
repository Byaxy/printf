#include "holberton.h"

/**
 * print_hex - prints number in hexadecimal form
 * @n: number to print
 * @f: flag to determine printing case
 * Return: number of digits printed
 */

int print_hex(unsigned int n, unsigned int f)
{
	unsigned int i, m, sum;
	unsigned int a[8];
	int count;
	char diff;

	m = 268435456; /* (16 ^ 7) */
	if (f)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, count = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			count++;
		}
	}

	return (count);
}

/**
 * print_x - prints number in lowercase hexadecimal
 * @x: number to print
 * Return: number of digits printed
 */

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - prints a number in uppercase hexadecimal
 * @X: number to print
 * Return: number of digits printed
 */

int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

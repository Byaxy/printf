#include "holberton.h"

/**
 * _pow - calculates the exponent of a number
 * @base: base of exponent
 * @ex: exponent
 * Return: base ^ ex
 */

static unsigned long _pow(unsigned int base, unsigned int ex)
{
	unsigned int i;
	unsigned long result = base;

	for (i = 1; i < ex; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * print_p - prints an address
 * @p: address to print
 * Return: number of characters printed
 */

int print_p(va_list p)
{
	unsigned int i, sum;
	unsigned int a[16];
	unsigned long n, m;
	int count = 0;
	char *str = "(nil)";

	n = va_arg(p, unsigned long);
	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			_putchar(str[i]);
			count++;
		}
		return (count);
	}
	_putchar('0');
	_putchar('x');
	count = 2;
	m = _pow(16, 15);
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i < 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + ('a' - ':') + a[i]);

			count++;
		}
	}
	return (count);
}

#include "holberton.h"

/**
 * get_func - returns needed function
 * @format: function identifier
 * Return: pointer to required function
 */
int G = 0;
static int (*get_func(const char *format))(va_list)
{
	unsigned int i;

	print keys[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'d', print_d},
		{'u', print_u},
		{'o', print_o},
		{'b', print_b},
		{'x', print_x},
		{'X', print_X},
		{'r', print_r},
		{'R', print_R},
		{'p', print_p},
		{'S', print_S},
		{'+', print_pl},
		{'#', print_ha},
		{' ', print_sp},
		{'\0', NULL}
	};
for (i = 0; keys[i].id != '\0'; i++)
{
if ((keys[i].id) == *format)
{
if ((keys[i].id) == '+')
{
_putchar('+');
G +=1;
return (keys[2].func);
}
else if ((keys[i].id) == '#')
{
_putchar('#');
G +=1;
return (keys[2].func);
}
else if ((keys[i].id) == ' ')
{
_putchar(' ');
G +=1;
return (keys[2].func);
}
break;
}
}
return (keys[i].func);
}
/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0;
	va_list valist;
	int (*f)(va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		f = get_func(&format[i + 1]);
		if (f != NULL)
		{
			count += f(valist);
			i += 2;
			if (G > 0)
			break;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(valist);
	return (count);
}

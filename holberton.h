#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);

/* printf functions */
int _printf(const char *format, ...);
int print_s(va_list s);
int print_c(va_list c);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);
int print_R(va_list R);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_r(va_list r);
int print_S(va_list S);
/**
 * struct types - struct
 * @id: identifier of type to print
 * @func: pointer to respective function
 */

typedef struct types
{
	char id;
	int (*func)(va_list);
} print;

#endif

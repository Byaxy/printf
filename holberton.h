#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int _putchar(char c);
<<<<<<< HEAD
int _printf(const char *format, ...);
=======
>>>>>>> a19192ae63196c04a3b6a32de4aef14632696b66
char *create_buffer(void);
void write_buffer(char *buffer, int len, va_list list);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/* printf functions */
int _printf(const char *format, ...);
int print_s(va_list s);
int print_c(va_list c);
char *print_d(va_list list);
char *itob(va_list list);
char *rot13(va_list list);
char *rev_string(va_list list);
char *itoOctal(va_list list);

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

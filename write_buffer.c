#include "holberton.h"
/**
 *write_buffer: prints buffer, then it frees it and frees va_list
 *@buffer: buffer holding print-ables
 *@len: length of print-able string
 *@list: Va_list
 */
void write_buffer(char *buffer, len)
{
char *buff;
buff = relloc(buffer, len);
write(1,buff,len);
free(buff);
va_end(list);
}

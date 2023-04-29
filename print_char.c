#include "main.h"
#include <stdio.h>
/**
* print_char - character c to stdout
* @arguments: char input
* @buf: buffer pointer
* @ibuf: buffer pointer of index
* Return: On success 1.
*/
int print_char(va_list arguments, char *buf, unsigned int ibuf)
{
char c;

c = va_arg(arguments, int);
handler_buffer(buf, c, ibuf);

return (1);
}

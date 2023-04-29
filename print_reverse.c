#include "main.h"

/**
* print_reverse - Functions writes the str in reverse
* @arguments: input string
* @buf: buffer pointer
* @ibuf: index for buffer pointer
* Return: Return number of chars printed.
*/
int print_reverse(va_list arguments, char *buf, unsigned int ibuf)
{
char *str;
unsigned int i;
int j = 0;
char nill[] = "(llun)";

str = va_arg(arguments, char *);
if (str == NULL)
{
for (i = 0; nill[i]; i++)
ibuf = handler_buffer(buf, nill[i], ibuf);
return (6);
}
for (i = 0; str[i]; i++)
;
j = i - 1;
for (; j >= 0; j--)
{
ibuf = handler_buffer(buf, str[j], ibuf);
}
return (i);
}

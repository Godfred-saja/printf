#include "main.h"

/**
* handler - Format controller
* @str: String format
* @list: List of arguments
*
* Return: Total size of arguments with the total size of the base string
**/
int handler(const char *str, va_list list)
{
int size, j, ax;

size = 0;
for (j = 0; str[j] != 0; j++)
{
if (str[j] == '%')
{
ax = percent_handler(str, list, &j);
if (ax == -1)
return (-1);

size += ax;
continue;
}

_putchar(str[j]);
size = size + 1;
}

return (size);
}

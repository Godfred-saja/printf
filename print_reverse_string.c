#include "main.h"

/**
* print_reverse_string - function that print a string in reverse
* @list: List of arguments in the function
*
* Return: Return length of the string
**/
int print_reverse_string(va_list list)
{
int j, size;
const char *str;

str = va_arg(list, const char *);

size = _strlen(str);

for (j = size - 1; j >= 0; j--)
_putchar(str[j]);

return (size);
}

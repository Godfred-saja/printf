#include "main.h"

/**
* print_octal - Function that print a unsigned octal
* @list: List number to print
* Return: Return length of the number
**/
int print_octal(va_list list)
{
char *p_buff;
int size;

p_buff = itoa(va_arg(list, unsigned int), 8);

size = print((p_buff != NULL) ? p_buff : "NULL");

return (size);
}

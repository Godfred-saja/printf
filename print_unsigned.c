#include "main.h"

/**
* print_unsigned - function that print a unsigned int
* @list: Number of functions to print
* Return: Length of the numbers to print
**/
int print_unsigned(va_list list)
{
char *p_buff;
int size;

p_buff = itoa(va_arg(list, unsigned int), 10);

size = print((p_buff != NULL) ? p_buff : "NULL");

return (size);
}

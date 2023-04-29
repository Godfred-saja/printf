#include "main.h"
#include <stdio.h>
/**
* print_address - prints an input variable address
* @arguments: input address.
* @buf: buffer pointer.
* @ibuf: buffer pointer for index
*
* Return: chars printed.
*/
int print_address(va_list arguments, char *buf, unsigned int ibuf)
{
void *add;
long int int_input;
int i, count, first_digit, isnegative;
char *hexadecimal, *binary;
char nill[] = "(nil)";

add = (va_arg(arguments, void *));
if (add == NULL)
{
for (i = 0; nill[i]; i++)
ibuf = handler_buffer(buf, nill[i], ibuf);
return (5);
}
int_input = (intptr_t)add;
isnegative = 0;
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isnegative = 1;
}
binary = malloc(sizeof(char) * (64 + 1));
binary = f_binary_array(binary, int_input, isnegative, 64);
hexadecimal = malloc(sizeof(char) * (16 + 1));
hexadecimal = f_hexa_array(binary, hexadecimal, 0, 16);
ibuf = handler_buffer(buf, '0', ibuf);
ibuf = handler_buffer(buf, 'x', ibuf);
for (first_digit = i = count = 0; hexadecimal[i]; i++)
{
if (hexadecimal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = handler_buffer(buf, hexadecimal[i], ibuf);
count++;
}
}
free(binary);
free(hexadecimal);
return (count + 2);
}

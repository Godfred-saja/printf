#include "main.h"

/**
* print_upxe - Function that prints a decimal in hexadecimal
* @arguments: The character to be printed
* @buf: buffer pointer to be printed
* @ibuf: index for buffer pointers
* Return: Return number of chars printed
*/
int print_upxe(va_list arguments, char *buf, unsigned int ibuf)
{
int int_input, i, isnegative, count, first_digit;
char *hexadecimal, *binary;

int_input = va_arg(arguments, int);
isnegative = 0;
if (int_input == 0)
{
ibuf = handler_buffer(buf, '0', ibuf);
return (1);
}
if (int_input < 0)
{
int_input = (int_input * -1) - 1;
isnegative = 1;
}
binary = malloc(sizeof(char) * (32 + 1));
binary = f_binary_array(binary, int_input, isnegative, 32);
hexadecimal = malloc(sizeof(char) * (8 + 1));
hexadecimal = f_hexa_array(binary, hexadecimal, 1, 8);
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
return (count);
}

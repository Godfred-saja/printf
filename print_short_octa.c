#include "main.h"

/**
* prinhocta - Function to be prints long decimal number in octal
* @arguments: input number
* @buf: buffer pointer
* @ibuf: index for buffer pointer
* Return: Return number of chars printed.
*/
int prinhocta(va_list arguments, char *buf, unsigned int ibuf)
{
short int int_input, i, isnegative, count, first_digit;
char *octal, *binary;

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

binary = malloc(sizeof(char) * (16 + 1));
binary = f_binary_array(binary, int_input, isnegative, 16);
octal = malloc(sizeof(char) * (6 + 1));
octal = f_short_octa_array(binary, octal);
for (first_digit = i = count = 0; octal[i]; i++)
{
if (octal[i] != '0' && first_digit == 0)
first_digit = 1;
if (first_digit)
{
ibuf = handler_buffer(buf, octal[i], ibuf);
count++;
}
}
free(binary);
free(octal);
return (count);
}

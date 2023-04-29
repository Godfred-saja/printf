#include "main.h"

/**
* prinnocta - Function print the number in octal begining with zero
* @arguments: input string
* @buf: buffer pointers
* @ibuf: index for buffer pointed
* Return: Return number of chars printed
*/
int prinnocta(va_list arguments, char *buf, unsigned int ibuf)
{
int int_input, i, isnegative, count, first_digit;
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
ibuf = handler_buffer(buf, '0', ibuf);
binary = malloc(sizeof(char) * (32 + 1));
binary = f_binary_array(binary, int_input, isnegative, 32);
octal = malloc(sizeof(char) * (11 + 1));
octal = f_octa_array(binary, octal);
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
return (count + 1);
}

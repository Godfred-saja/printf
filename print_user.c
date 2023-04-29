#include "main.h"

/**
* print_user - function that prints a string and values
* @arguments: input string
* @buf: buffer pointers
* @ibuf: index for buffer pointers
* Return: Return number of chars printed
*/
int print_user(va_list arguments, char *buf, unsigned int ibuf)
{
unsigned char *str;
char *hexadecimal, *binary;
unsigned int i, sum, op;

str = va_arg(arguments, unsigned char *);
binary = malloc(sizeof(char) * (32 + 1));
hexadecimal = malloc(sizeof(char) * (8 + 1));
for (sum = i = 0; str[i]; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
ibuf = handler_buffer(buf, '\\', ibuf);
ibuf = handler_buffer(buf, 'x', ibuf);
op = str[i];
binary = f_binary_array(binary, op, 0, 32);
hexadecimal = f_hexa_array(binary, hexadecimal, 1, 8);
ibuf = handler_buffer(buf, hexadecimal[6], ibuf);
ibuf = handler_buffer(buf, hexadecimal[7], ibuf);
sum += 3;
}
else
ibuf = handler_buffer(buf, str[i], ibuf);
}
free(binary);
free(hexadecimal);
return (i + sum);
}

#include "main.h"
/**
* print_unto - function that prints an unsigned int
* @arguments: number to print
* @buf: buffer pointer to be printed
* @ibuf: index for buffer pointer
* Return: Return number of chars printed.
*/
int print_unto(va_list arguments, char *buf, unsigned int ibuf)
{
unsigned int int_in, int_temp, i, div;

int_in = va_arg(arguments, unsigned int);
int_temp = int_in;
div = 1;
while (int_temp > 9)
{
div *= 10;
int_temp /= 10;
}
for (i = 0; div > 0; div /= 10, i++)
{
ibuf = handler_buffer(buf, ((int_in / div) % 10) + '0', ibuf);
}
return (i);
}

#include "main.h"

/**
* prinhunto - Function that prints a short unsigned integer
* @arguments: number to be printed
* @buf: buffer pointer
* @ibuf: index for buffer pointer
* Return: Return number of chars printed.
*/
int prinhunto(va_list arguments, char *buf, unsigned int ibuf)
{
unsigned short int int_in, int_temp, i, div;

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

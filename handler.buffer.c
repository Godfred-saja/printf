#include "main.h"

/**
* handler_buffer - concatenates the buffer characters
* @buf: buffer pointer
* @c: character to concatenate
* @ibuf: buffer pointer for index
* Return: index of buffer for pointer.
*/
unsigned int handler_buffer(char *buf, char c, unsigned int ibuf)
{
if (ibuf == 1024)
{
print_buffer(buf, ibuf);
ibuf = 0;
}
buf[ibuf] = c;
ibuf++;
return (ibuf);
}

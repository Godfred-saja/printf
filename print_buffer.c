#include "main.h"

/**
* print_buffer - prints buffer
* @buf: buffer pointer
* @nbuf: bytes to printed
* Return: bytes printed.
*/
int print_buffer(char *buf, unsigned int nbuf)
{
return (write(1, buf, nbuf));
}

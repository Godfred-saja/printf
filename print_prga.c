#include "main.h"
#include <stdio.h>

/**
* print_prga - functions to writes the character c to stdout
* @a: input char
* @buf: buffer pointer
* @i: index for buffer pointer
* Return: Return On success 1.
*/
int print_prga(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
handler_buffer(buf, '%', i);

return (1);
}

#include "main.h"

/**
* buffer - Save the character in a buffer
* @c: Character
*
* Return: 1
**/
int buffer(char c)
{
static char buffering[1024];
static int j;

if (c == -1 || j == 1024)
{
write(1, buffering, j);
j = 0;
}

if (c != -1)
buffering[j++] = c;

return (1);
}

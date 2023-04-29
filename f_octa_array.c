#include "main.h"

/**
* f_octa_array - The character c to stdout
*
* @bnr: array that store binary.
* @oct: array that store octal.
*
* Return: binary array.
*/
char *f_octa_array(char *bnr, char *oct)
{
int op, i, j, ioct, limit;

oct[11] = '\0';
for (i = 31, ioct = 10; i >= 0; i--, ioct--)
{
if (i > 1)
limit = 4;
else
limit = 2;
for (op = 0, j = 1; j <= limit; j *= 2, i--)
op = ((bnr[i] - '0') * j) + op;
i++;
oct[ioct] = op + '0';
}
return (oct);
}

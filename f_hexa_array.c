#include "main.h"

/**
* f_hexa_array - The character c to stdout
*
* @bnr: array to store binary.
* @hex: array to store hexadecimal.
* @isupp: integer where hexadecimal array is
* in lowercase or uppercase letter.
* @limit: hex size
* Return: binary array.
*/
char *f_hexa_array(char *bnr, char *hex, int isupp, int limit)
{
int op, i, j, toletter;

hex[limit] = '\0';
if (isupp)
toletter = 55;
else
toletter = 87;
for (i = (limit * 4) - 1; i >= 0; i--)
{
for (op = 0, j = 1; j <= 8; j *= 2, i--)
op = ((bnr[i] - '0') * j) + op;
i++;
if (op < 10)
hex[i / 4] = op + 48;
else
hex[i / 4] = op + toletter;
}
return (hex);
}

#include "main.h"

/**
* f_binary_array - Function that prints decimal in binary
* @binary: pointers to binary
* @int_in: number of input
* @isneg: input (is negative)
* @limit: binary sizes
* Return: Return number of chars to be printed.
*/
char *f_binary_array(char *binary, long int int_in, int isneg, int limit)
{
int i;

for (i = 0; i < limit; i++)
binary[i] = '0';
binary[limit] = '\0';
for (i = limit - 1; int_in > 1; i--)
{
if (int_in == 2)
binary[i] = '0';
else
binary[i] = (int_in % 2) + '0';
int_in /= 2;
}
if (int_in != 0)
binary[i] = '1';
if (isneg)
{
for (i = 0; binary[i]; i++)
if (binary[i] == '0')
binary[i] = '1';
else
binary[i] = '0';
}
return (binary);
}

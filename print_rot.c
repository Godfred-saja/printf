#include "main.h"

/**
* rot13 - Function that encodes a string using rot13.
* @s: print string to enconde the function
* Return: Return string encode
*/
int rot13(char *s)
{
int j, k;
char *normal, *rot13;

normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (j = 0; s[j] != '\0'; j++)
{
for (k = 0; normal[k] != '\0'; k++)
{
if (s[j] == normal[k])
{
_putchar(rot13[k]);
break;
}
}

if (!normal[k])
_putchar(s[j]);
}
return (j);
}

/**
* print_rot - Function that prints the rot13 string
* @list: lsit string to be encoded in the function
* Return: Return the string encoded in the function
**/
int print_rot(va_list list)
{
char *p;
int p_len;

p = va_arg(list, char *);
p_len = rot13((p != NULL) ? p : "(ahyy)");

return (p_len);
}

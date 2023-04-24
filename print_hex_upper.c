#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
* print_hex_upper - Print a number in hexadecimal format
* @list: Number to print
*
* Return: Length of the number
**/
int print_hex_upper(va_list list)
{
char *p_buff;
int size;

p_buff = itoa(va_arg(list, unsigned int), 16);
p_buff = string_to_upper(p_buff);

size = print((p_buff != NULL) ? p_buff : "NULL");

return (size);
}

/**
* is_lowercase - Check if the character are in lowercase
* @c: Character
* Return: 1 or 0
**/
int is_lowercase(char c)
{
return (c >= 'a' && c <= 'z');
}

/**
* string_to_upper - Change the string to uppercase
* @s: String
* Return: String uppercase
**/
char *string_to_upper(char *s)
{
int j;

for (j = 0; s[j] != '\0'; j++)
{
if (is_lowercase(s[j]))
{
s[j] = s[j] - 32;
}
}

return (s);
}

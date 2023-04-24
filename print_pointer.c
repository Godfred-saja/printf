#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
* print_pointer - Function that print a number in hex format
* @list: List number to print
*
* Return: Return the length of the number
**/
int print_pointer(va_list list)
{
char *p_buff;
int size;

p_buff = itoa(va_arg(list, unsigned long int), 16);

if (!_strcmp(p_buff, "0"))
return (print("(nil)"));

size = print("0x");

if (!_strcmp(p_buff, "-1"))
size += print("ffffffffffffffff");
else
size += print(p_buff);

return (size);
}

/**
* _strcmp - Compare two strings
* @s1: Print string 1 function
* @s2: Print string 2 function
* Return: Return integer
**/
int _strcmp(char *s1, char *s2)
{
int j;

for (j = 0; s1[j] != '\0'; j++)
{
if (s1[j] != s2[j])
return (s1[j] - s2[j]);
}

return (0);
}

#include "main.h"


/**
* _strlen - The function that calculate the length of a string
* @str: print string function.
* Return: Length of the string
**/
int _strlen(const char *str)
{
int j;

for (j = 0; str[j] != 0; j++)
;

return (j);
}

/**
* print - print character of the function.
* @str: string function
* Return: string length of the function.
*/

int print(char *str)
{
int j;

for (j = 0; str[j] != '\0'; ++j)
_putchar(str[j]);

return (j);
}

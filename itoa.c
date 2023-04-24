#include "main.h"

/**
* itoa - integer
* @nm: num
* @bs: base
*
* Return: char
**/
char *itoa(long int nm, int bs)
{
static char *array = "0123456789abcdef";
static char buffer[50];
char sign = 0;
char *ptr;
unsigned long n = nm;

if (nm < 0)
{
n = -nm;
sign = '-';
}
ptr = &buffer[49];
*ptr = '\0';

do      {
*--ptr = array[n % bs];
n /= bs;
} while (n != 0);

if (sign)
*--ptr = sign;
return (ptr);
}

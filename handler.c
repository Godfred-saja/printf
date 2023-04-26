#include "main.h"

/**
* handler - Format controller
* @str: String format
* @list: List of arguments
*
* Return: Total size of arguments with the total size of the base string
**/
int handler(const char *str, va_list list)
{
int size, j, ax;

size = 0;
for (j = 0; str[j] != 0; j++)
{
if (str[j] == '%')
{
ax = percent_handler(str, list, &j);
if (ax == -1)
return (-1);

size += ax;
continue;
}

_putchar(str[j]);
size = size + 1;
}

return (size);
}

/**
* percent_handler - Controller for percent format
* @str: String format
* @list: List of arguments
* @j: Iterator
*
* Return: Size of the numbers of elements printed
**/
int percent_handler(const char *str, va_list list, int *j)
{
int size, k, number_formats;
format formats[] = {
{'s', print_string}, {'c', print_char},
{'d', print_int}, {'i', print_int},
{'b', print_bin}, {'u', print_unsigned},
{'o', print_octal}, {'x', print_hex_lower},
{'X', print_hex_upper}, {'p', print_pointer},
{'r', print_reverse_string}, {'R', print_rot}
};

*j = *j + 1;

if (str[*j] == '\0')
return (-1);

if (str[*j] == '%')
{
_putchar('%');
return (1);
}

number_formats = sizeof(formats) / sizeof(formats[0]);
for (size = k = 0; k < number_formats; k++)
{
if (str[*j] == formats[k].type)
{
size = formats[i].f(list);
return (size);
}

}

_putchar('%'), _putchar(str[*j]);

return (2);
}

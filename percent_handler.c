#include "main.h"

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
int size, i, number_formats;
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
for (size = i = 0; i < number_formats; i++)
{
if (str[*j] == formats[i].type)
{
size = formats[i].f(list);
return (size);
}

}

_putchar('%'), _putchar(str[*j]);

return (2);
}

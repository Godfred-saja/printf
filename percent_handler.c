#include "main.h"

/**
* percent_handler - Controller for percent format
* @str: String format
* @list: List of arguments
* @i: Iterator
*
* Return: Size of the numbers of elements printed
**/
int percent_handler(const char *str, va_list list, int *i)
{
int size, k, number_formats;
format formats[] = {
{'s', print_string}, {'c', print_char},
{'d', print_integer}, {'i', print_integer},
{'b', print_binary}, {'u', print_unsigned},
{'o', print_octal}, {'x', print_hexadecimal_low},
{'X', print_hexadecimal_upp}, {'p', print_pointer},
{'r', print_rev_string}, {'R', print_rot}
};

*i = *i + 1;

if (str[*i] == '\0')
return (-1);

if (str[*i] == '%')
{
_putchar('%');
return (1);
}

number_formats = sizeof(formats) / sizeof(formats[0]);
for (size = k = 0; k < number_formats; k++)
{
if (str[*i] == formats[k].type)
{
size = formats[k].f(list);
return (size);
}

}

_putchar('%'), _putchar(str[*i]);

return (2);
}

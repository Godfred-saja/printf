#include "main.h"

/**
* eve_print_func - function the number of identifiers is returned.
* @s: identifier argument
* @index: argument identifier input.
* Return: number of identifiers.
*/
int eve_print_func(const char *s, int index)
{
print_t pr[] = {
{"c", print_char}, {"s", print_strn}, {"i", print_inte},
{"d", print_inte}, {"b", print_binary}, {"u", print_unto},
{"o", print_octa}, {"x", print_hexa}, {"X", print_upxe},
{"S", print_user}, {"p", print_address}, {"li", prinlinte},
{"ld", prinlinte}, {"lu", prinlunto}, {"lo", prinlocta},
{"lx", prinlhexa}, {"lX", prinlupxe}, {"hi", prinhinte},
{"hd", prinhinte}, {"hu", prinhunto}, {"ho", prinhocta},
{"hx", prinhhexa}, {"hX", prinhupxe}, {"#o", prinnocta},
{"#x", prinnhexa}, {"#X", prinnupxe}, {"#i", print_inte},
{"#d", print_inte}, {"#u", print_unto}, {"+i", prinpinte},
{"+d", prinpinte}, {"+u", print_unto}, {"+o", print_octa},
{"+x", print_hexa}, {"+X", print_upxe}, {" i", prinsinte},
{" d", prinsinte}, {" u", print_unto}, {" o", print_octa},
{" x", print_hexa}, {" X", print_upxe}, {"R", print_rot1},
{"r", print_reverse}, {"%", print_prga}, {"l", print_prga},
{"h", print_prga}, {" +i", prinpinte}, {" +d", prinpinte},
{"+ i", prinpinte}, {"+ d", prinpinte}, {" %", print_prga},
{NULL, NULL},
};
int i = 0, j = 0, first_index;

first_index = index;
while (pr[i].type_arg)
{
if (s[index] == pr[i].type_arg[j])
{
if (pr[i].type_arg[j + 1] != '\0')
index++, j++;
else
break;
}
else
{
j = 0;
i++;
index = first_index;
}
}
return (j);
}

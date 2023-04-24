#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>

/**
 * struct _format - function that print typedef struct
 *
 * @type: Format of type
 * @f: The function associate the format
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

/* printers functions */
int print_string(va_list);
int print_hex_upper(va_list);
int print_hex_lower(va_list);
int print_pointer(va_list);
int print_reverse_string(va_list);
int print_char(va_list);
int print_int(va_list);
int print_bin(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);

/* _putchar.c functions */
int _putchar(char);
int buffer(char);

/* utils.c functions */
int print(char *);
char *itoa(long int, int);
int _strlen(const char *);

/* printf.c functions */
int _printf(const char *, ...);

/* handler.c functions */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

#endif

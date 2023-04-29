#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct print - struct for printer functions
* @type_arg: identifier
* @f: pointer to a printer functions
*
* Description: struct that stores pointers to a
* printer functions.
*/
typedef struct print
{
char *type_arg;
int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int (*g_print_func(const char *s, int index))(va_list, char *, unsigned int);
int eve_print_func(const char *s, int index);
unsigned int handler_buffer(char *buf, char c, unsigned int ibuf);
int print_buffer(char *buf, unsigned int nbuf);
char *f_binary_array(char *binary, long int int_in, int isneg, int limit);
char *f_octa_array(char *bnr, char *oct);
char *f_long_octa_array(char *bnr, char *oct);
char *f_short_octa_array(char *bnr, char *oct);
char *f_hexa_array(char *bnr, char *hex, int isupp, int limit);
int print_prga(va_list __attribute__((unused)), char *, unsigned int);
int print_char(va_list arguments, char *buf, unsigned int ibuf);
int print_strn(va_list arguments, char *buf, unsigned int ibuf);
int print_inte(va_list arguments, char *buf, unsigned int ibuf);
int print_binary(va_list arguments, char *buf, unsigned int ibuf);
int print_unto(va_list arguments, char *buf, unsigned int ibuf);
int print_octa(va_list arguments, char *buf, unsigned int ibuf);
int print_hexa(va_list arguments, char *buf, unsigned int ibuf);
int print_upxe(va_list arguments, char *buf, unsigned int ibuf);
int print_user(va_list arguments, char *buf, unsigned int ibuf);
int print_address(va_list arguments, char *buf, unsigned int ibuf);
int print_reverse(va_list arguments, char *buf, unsigned int ibuf);
int print_rot1(va_list arguments, char *buf, unsigned int ibuf);
int prinlinte(va_list arguments, char *buf, unsigned int ibuf);
int prinlunto(va_list arguments, char *buf, unsigned int ibuf);
int prinlocta(va_list arguments, char *buf, unsigned int ibuf);
int prinlhexa(va_list arguments, char *buf, unsigned int ibuf);
int prinlupxe(va_list arguments, char *buf, unsigned int ibuf);
int prinhinte(va_list arguments, char *buf, unsigned int ibuf);
int prinhunto(va_list arguments, char *buf, unsigned int ibuf);
int prinhocta(va_list arguments, char *buf, unsigned int ibuf);
int prinhhexa(va_list arguments, char *buf, unsigned int ibuf);
int prinhupxe(va_list arguments, char *buf, unsigned int ibuf);
int prinpinte(va_list arguments, char *buf, unsigned int ibuf);
int prinnocta(va_list arguments, char *buf, unsigned int ibuf);
int prinnhexa(va_list arguments, char *buf, unsigned int ibuf);
int prinnupxe(va_list arguments, char *buf, unsigned int ibuf);
int prinsinte(va_list arguments, char *buf, unsigned int ibuf);
int main(void);

#endif

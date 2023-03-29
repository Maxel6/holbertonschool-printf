#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _strlen(char *count);
int print_d(va_list d);
int count_digit(long int a);
int reverse(int num_digits, char *digits);
int _putchar(char c);
int print_c(va_list c);
int print_percent(va_list a);
int print_s(va_list s);
int  check_type(char c, va_list list);
int _printf(const char *format, ...);
/**
 * struct check_type - structure who take argument and function
 * @arg: the conversion specifiers
 * @func: the function to call
 */
typedef struct check_type
{
	char arg;
	int (*func)(va_list);

} check_t;
#endif


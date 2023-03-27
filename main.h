#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _strlen(char *count);
int print_percent(void);
int print_c(va_list c);
int print_s(va_list s);
int(*check_type(char c, va_list list));
int _printf(const char *format, ...);
typedef struct check_type {
  char arg;
  int (*func)(va_list);

} check_t;
#endif

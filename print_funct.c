#include "main.h"

int print_percent(__attribute__((unused)) va_list a)
{
	int percent = '%';

	return (write(STDOUT_FILENO, &percent, sizeof(char)));
}

int print_c(va_list c)
{
	int a = va_arg(c, int);

	return (write(STDOUT_FILENO, &a, sizeof(char)));
}

int print_s(va_list s)
{
	char *str = va_arg(s, char*);
	int len =  _strlen(str);

	return (write(STDOUT_FILENO, str, sizeof(char) * len));
}

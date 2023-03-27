#include "main.h"
int _strlen(char *count)
{
	int i = 0;
	
	while (count[i])
	{
		i++;
	}
	return (i);
}

int print_c(va_list c)
{
	int a = va_arg(c, int);
	return (write(STDOUT_FILENO, &a, sizeof(char)));
}

int print_s(va_list s)
{
	char *str = va_arg(s, char*);
	return (write(STDOUT_FILENO, str, sizeof(char) * _strlen(str)));
}

int(*check_type(char c, va_list list))
{
	int i = 0;
	check_t type[] = {{'s', print_s}, {'c', print_c}, {0, 0}};

	while (type[i].arg != 0) {
		if (c == type[i].arg) {
			type[i].func(list);
		}
		i++;
	}
	return 0;
}

int _printf(const char *format, ...)
{
	va_list arg;
	const char *p = &format[0];

	va_start(arg, format);

	while (*p!= 0)
	{
		if (*p != '%')
		{
			write(STDOUT_FILENO, p, sizeof(char));
			p++;
		}
		else
		{
			p++;
			check_type(*p, arg);
			p++;
		}
	}
	return (0);
}

int main(void)
{
	char a = 'W';

	_printf("toto %c tata", a);
	return (0);
}
/* %d et %i : Ils sont utilisés pour afficher des entiers signés en base
 * décimale. Ils sont équivalents et peuvent être utilisés de manière
 * interchangeable.*/

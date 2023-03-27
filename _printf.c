#include "main.h"

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


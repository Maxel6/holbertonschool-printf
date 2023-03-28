#include "main.h"

int _printf(const char *format, ...)
{
	va_list arg;
	const char *p = &format[0];
	int count = 0;

	va_start(arg, format);

	while (*p!= 0)
	{
		if (*p != '%')
		{
			count += write(STDOUT_FILENO, p, sizeof(char));
			p++;
		}
		else
		{
			p++;
			count += check_type(*p, arg);
			p++;
		}
	}
	return (count);
}


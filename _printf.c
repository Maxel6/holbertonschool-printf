#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: the format string
 * Description: This function prints formatted output to stdout.
 * It supports conversion specifiers for characters ('c'), string ('s'),
 * and the percent symbole ('%').
 * Return: On success, the number of characters written is returned.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	const char *p = &format[0];
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);

	while (*p != 0)
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

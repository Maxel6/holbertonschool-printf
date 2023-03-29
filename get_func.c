#include "main.h"
/**
 * check_type - checks the type of the format specifier
 * @c: the format specifier character
 * @list: the argument list
 * Description: This function checks the type of the format specifier
 * and calls the corresponding function to handle the argument.
 * Return: On success, the number of characters written is returned
 */
int check_type(char c, va_list list)
{
	int i = 0;
	int a = 0;

	check_t type[] = {
		{'s', print_s},
		{'c', print_c},
		{'%', print_percent},
		{0, 0}
	};

	while (type[i].arg != 0)
	{
		if (c == type[i].arg)
		{
			a += type[i].func(list);
		}
		i++;
	}
	return (a);
}


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
	int p_flag = 0;
	int percent = '%';
	check_t type[] = {
		{'s', print_s},
		{'c', print_c},
		{'d', print_d},
		{'i', print_d},
		{'%', print_percent},
		{0, 0}};

	while (type[i].arg != 0)
	{
		if (c == type[i].arg)
		{
			a += type[i].func(list);
			p_flag = 1;
		}
		i++;
	}
	if (p_flag != 1)
	{
		printf("toto");
		write(STDOUT_FILENO, &percent, sizeof(char));
		write(STDOUT_FILENO, &c, sizeof(char));
	}


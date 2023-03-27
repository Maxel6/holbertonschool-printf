#include "main.h"
int(*check_type(char c, va_list list))
{
	int i = 0;
	check_t type[] = {
		{'s', print_s},
		{'c', print_c},
		{0, 0}
	};

	while (type[i].arg != 0)
	{
		if (c == type[i].arg)
			type[i].func(list);
		i++;
	}
	return 0;
}

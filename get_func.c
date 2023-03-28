#include "main.h"
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
/*			p_flag = 1;
			break;
*/		}
		i++;
	}
/**	if (!p_flag)
*	{
*		write(STDOUT_FILENO, &percent, sizeof(char));
*	}
*/	return (a);
}

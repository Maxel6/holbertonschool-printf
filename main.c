#include "main.h"
int main(void)
{
	char c = 'W';
	char *str = "ui";

	_printf("Hello World");
	_printf("Hello World\n");
	_printf("char c : %c\n", c);
	_printf("string str : %s\n", str);
	_printf("Here a percent %%\n");
	_printf("What's happen with 3 percents? %%%\n");
	_printf("\n");
	_printf("toto %c tata %s\n", c, str);
	return (0);
}

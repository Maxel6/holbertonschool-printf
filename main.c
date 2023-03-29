#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 20;
	_printf("age = %d \n", a);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	return (0);

}

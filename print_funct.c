#include "main.h"
/**
 * print_percent - prints the percent symbol
 * @a: unused argument
 * Description: This function prints the percent symbole to stdout.
 * Return: On success, the number of characters written is returned.
 */
int print_percent(__attribute__((unused)) va_list a)
{
	int percent = '%';

	return (write(STDOUT_FILENO, &percent, sizeof(char)));
}

/**
 * print_c - prints a character
 * @c: the character to be printed
 * Description: This functions prints a character to stdout.
 * Return: On success, the number of characters written is returned.
 */
int print_c(va_list c)
{
	int a = va_arg(c, int);

	return (write(STDOUT_FILENO, &a, sizeof(char)));
}

/**
 * print_s - prints a string
 * @s: the string to be printed
 * Description: This functions prints a string to stdout.
 * Return: On success, the number of characters written is returned.
 */
int print_s(va_list s)
{
	char *str = va_arg(s, char*);
	int len =  _strlen(str);

	return (write(STDOUT_FILENO, str, sizeof(char) * len));
}

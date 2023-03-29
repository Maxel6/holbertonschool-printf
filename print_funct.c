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
	int len = 0;

	if (str == NULL)
		str ="(null)";

	len =  _strlen(str);
	return (write(STDOUT_FILENO, str, sizeof(char) * len));
}

int print_d(va_list d)
{
  int num = va_arg(d, int);
  char *digits;
  int num_digits = 0;
  digits = malloc(count_digit(num) * sizeof(char));

  if (num < 0)
  {
    _putchar('-');
    num = -num;
  }

  if (num == 0)
  {
    _putchar('0');
    return 1;
  }

  while (num > 0)
  {
    digits[num_digits] = num % 10;
    num /= 10;
    num_digits++;
  }

  return (reverse(num_digits, digits));
}


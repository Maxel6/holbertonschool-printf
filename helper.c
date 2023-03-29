#include "main.h"
/**
 * _strlen - compute the length of a string
 * @count: the string to compute the length of
 * Description: This function computes the length of a string
 * by iterating through each character until the null terminator
 * is reached.
 * Return: The length of the string.
 */
int _strlen(char *count)
{
	int i = 0;

	while (count[i])
	{
		i++;
	}
	return (i);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * count_digit - count the number of digit
 * @a: the int to count
 * Return: the number of digit + 1 if a is negative
 */
int count_digit(long int a)
{
	int c = 0;

	if (a < 0)
		a = -a;
	do
		c++;
	while ((a /= 10) > 0);
	return (c);
}
/**
 * reverse - reverse a string
 * @num_digits: the int to reverse
 * @digits: the dest string
 * Return: On success, the number of characters written is returned.
 */
int reverse(int num_digits, char *digits)
{
	int i = 0;
	int count = 0;

	for (i = num_digits - 1; i >= 0; i--, count++)
		_putchar(digits[i] + '0');
	return (count);
}

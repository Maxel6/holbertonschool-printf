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


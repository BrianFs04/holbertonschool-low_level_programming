#include "holberton.h"

/**
 * _islower - checks for lowercase characters
 * @c: The character to print
 *
 * Return: On success 1. 0 otherwise.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
/**
 * _strlen_recursion - length of a string recursively
 *@s: String
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		i++;
	}
	return (i);
}

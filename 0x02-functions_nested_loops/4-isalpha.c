#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 *@c: The character to print
 *
 * Return: On success 1. 0 otherwise.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

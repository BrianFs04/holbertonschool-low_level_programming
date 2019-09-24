#include "holberton.h"

/**
 * _abs - writes the absolute value of an integer
 *@n: The charatter to print
 *
 * Return: the absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

#include "holberton.h"
/**
 * factorial - length of a string
 *@n: values to do the factorial
 *
 * Return: factorial, -1 if it's not possible, 1 if n is 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

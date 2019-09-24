#include "holberton.h"

/**
 * print_last_digit - writes the character c to stdout
 * @n: Prints the result
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}
	return (n);
}

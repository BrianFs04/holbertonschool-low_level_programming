#include "holberton.h"
/**
 * print_line - draws a straight line in terminal
 * @n: Integer
 *
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

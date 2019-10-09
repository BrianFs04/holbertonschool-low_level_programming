#include "holberton.h"
/**
 * _pow_recursion - the value of x raised to the power of y
 *@x: Base
 *@y: Exponent
 *
 * Return: power, -1 if it's not possible, 1 if n is 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

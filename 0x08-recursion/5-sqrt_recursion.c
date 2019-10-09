#include "holberton.h"
/**
 * _sqrt_initial - natural square root of a number
 *@a: number to iterate
 *@b: n
 *
 * Return: the natural square, -1 if it's not possible
 */
int _sqrt_initial(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	else
		return (_sqrt_initial(a + 1, b));
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: number we received from main
 *
 * Return: parameters of the other function
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_initial(1, n));
}

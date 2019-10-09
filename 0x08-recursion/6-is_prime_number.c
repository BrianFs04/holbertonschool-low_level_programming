#include "holberton.h"
/**
 * find_prime - prime number
 *@a:dividing
 *@b:n
 *
 * Return: 1 if it's prime number, 0 if it's not prime number
 */
int find_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (b % a  == 0 || b <= 1)
		return (0);
	else
		return (find_prime(a + 1, b));
}

/**
 * is_prime_number - natural square root of a number
 * @n: number we received from main
 *
 * Return: parameters of the other function
 */

int is_prime_number(int n)
{
	return (find_prime(2, n));
}

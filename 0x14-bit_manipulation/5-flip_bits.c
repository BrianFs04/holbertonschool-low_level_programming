#include "holberton.h"
/**
 * flip_bits - number of bits to flip to get from one number
 * to another
 * @n: first number
 * @m: second number
 * Return: counter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, res;

	res = n ^ m;
	i = 0;

	while (res)
	{
		i += res & 1;
		res >>= 1;
	}
	return (i);
}

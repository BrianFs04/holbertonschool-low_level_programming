#include "holberton.h"
/**
 * get_bit - bit at a given index
 * @n: number to check
 * @index: position
 * Return: index position 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return(-1);

	for (i = 0; i < index; i++)
	{
		n = (n >> 1);
	}
	return(n & 1);
}

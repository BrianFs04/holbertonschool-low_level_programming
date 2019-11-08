#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: address to the element
 * @index: position
 * Return: 1 if it works, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (n == NULL)
		return (-1);

	if (index > 64)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		*n = (*n & ~(1 << index));
	}
	return (1);
}

#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: address of the number
 * @index: position
 * Return: 1 to a given index -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		*n = (*n | (1 << index));
	}
	return (1);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: number of the elements to allocate
 * @c: the element to allocate
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	i = 0;
	a = malloc(size * sizeof(char));

	while (i < size)
	{
		if (size == 0)
		{
			return (NULL);
		}
		a[i] = c;
		i++;
	}
	return (a);
}

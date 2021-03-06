#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int res;

	if (min > max)
	{
		return (NULL);
	}

	res = max - min;
	a = malloc((res + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		a[i] = min++;
	}
	return (a);
}

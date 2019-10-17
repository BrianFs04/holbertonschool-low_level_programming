#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the array
 * Return: the array filled
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a;
	unsigned int i;

	i = 0;
	a = malloc((sizeof(unsigned int) * nmemb) + 1);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		if (a == NULL)
			return (NULL);
		a[i] = nmemb;
		i++;
	}
	return (a);
}

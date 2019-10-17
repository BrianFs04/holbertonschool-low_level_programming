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
	char *a;
	unsigned int i;

	i = 0;
	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}

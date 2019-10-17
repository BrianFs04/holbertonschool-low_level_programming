#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: value it receives
 * Return: Always 0 if success
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a  = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}

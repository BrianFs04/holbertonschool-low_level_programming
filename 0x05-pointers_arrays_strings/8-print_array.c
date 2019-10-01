#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *@a: Pointer to an integer
 *@n: Integer
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		++i;
	}

}

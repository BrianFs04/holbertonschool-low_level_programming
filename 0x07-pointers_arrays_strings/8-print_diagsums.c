#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: Pointer to a integer
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, res1 = 0, res2 = 0;

	while (i < size)
	{
		res1 += a[(size + 1) * i];
		i++;
	}
	while (j < size)
	{
		res2 += a[(size - 1) * (j + 1)];
		j++;
	}
	printf("%d, %d\n", res1, res2);
}

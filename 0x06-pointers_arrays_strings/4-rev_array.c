#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: Pointer to a char
 * @n: Number of elements
 */
void reverse_array(int *a, int n)
{
	int res, temp, i = 0;

	res = n / 2;

	for (; i < res; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

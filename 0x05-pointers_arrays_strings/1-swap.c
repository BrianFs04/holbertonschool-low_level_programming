#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: First pointer to an int
 * @b: Second pointer to an int
 */
void swap_int(int *a, int *b)
{
	int res = *a;

	*a = *b;
	*b = res;
}

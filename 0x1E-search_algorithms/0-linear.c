#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers using the
 *                 Linear search algorithm
 * @array: Array of integers
 * @size: Size of array
 * @value: Value to search for
 * Return: Value found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array)
	{
		return (-1);
	}
	for (; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

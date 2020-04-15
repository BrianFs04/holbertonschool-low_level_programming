#include "search_algos.h"
/**
 * find_val - Find value using Binary Search
 * @array: Array of integers
 * @low: Position 0 of the array
 * @high: Length of the array
 * @size: Size of the array
 * @value: Value to find
 * Return: Value
 */
int find_val(int *array, int low, int high, size_t size, int value)
{
	int i = 0;
	int mid;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		if (value < array[mid])
			high = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		else if (value == array[mid])
			return (mid);
	}
	return (-1);
}
/**
 * binary_search - Searches for a value in a sorted array of integers using
 *                 the Binary search algorithm
 * @array: Array of integers
 * @size: Size of the array
 * @value: Value to find
 * Return: Value
 */

int binary_search(int *array, size_t size, int value)
{
	int min, max;

	if (!array)
		return (-1);

	min = 0;
	max = size - 1;

	return (find_val(array, min, max, size, value));
}

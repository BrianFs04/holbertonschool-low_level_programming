#include "function_pointers.h"
/**
 * int_index - function pointer that searches for an integer
 * @array: elements
 * @size: size of the array
 * @cmp: value to compare with
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
	}
	return (-1);
}

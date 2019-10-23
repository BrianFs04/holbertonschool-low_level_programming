#include "function_pointers.h"
/**
 * array_iterator - function that executes a function on each element
 * @array: elements
 * @size: size of the array
 * @action: function pointers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
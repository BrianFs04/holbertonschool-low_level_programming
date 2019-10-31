#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: Initial element (head)
 * Return: The length
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}

	return (length);
}

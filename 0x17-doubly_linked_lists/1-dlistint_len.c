#include "lists.h"
/**
 * dlistint_len - number of elements of a doubly linked list
 * @h: pointer to the first node of the structure
 * Return: the number of elements of a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}

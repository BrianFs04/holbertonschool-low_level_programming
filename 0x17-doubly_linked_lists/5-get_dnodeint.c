#include "lists.h"
/**
 * get_dnodeint_at_index - function that nth node of a linked list
 * @head: pointer to the first node of the list
 * @index: node's index
 * Return: the nth node of a linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		if (head != NULL)
			head = head->next;
		i++;
	}
	return (head);
}

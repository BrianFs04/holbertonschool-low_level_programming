#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a list
 * @head: initialization point
 * Return: a specific node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for(i = 0; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
	}
	return (head);
}

#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at x position in a doubly linked list
 * @h: double pointer to the first node
 * @idx: x node's position
 * @n: value to add
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp = *h;
	dlistint_t *curr;
	size_t i = 0;

	if (new == NULL || *h == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		while (i < (idx - 1))
		{
			tmp = tmp->next;
			if (tmp == NULL)
			{
				free(new);
				return (NULL);
			}
			i++;
		}
		new->next = tmp->next;
		new->prev = tmp;
		curr = tmp->next;
		tmp->next = new;
		curr->prev = new;
		return (new);
	}
	return (new);
}

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

	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		if (*h != NULL)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		curr = tmp, tmp = tmp->next;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}
	if (tmp->next == NULL)
	{
		tmp->next = new, new->prev = tmp;
		new->next = NULL;
		return (new);
	}
	new->next = tmp->next, new->prev = tmp;
	curr = tmp->next, tmp->next = new, curr->prev = new;
	return (new);
}

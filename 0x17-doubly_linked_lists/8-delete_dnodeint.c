#include "lists.h"
/**
 * delete_dnodeint_at_index - delete x node in a doubly linked list
 * @head: double pointer to the first node
 * @index: x node's position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	dlistint_t *tmp = *head;
	size_t i = 0;

	if (*head == NULL || ((*head)->next == NULL && (*head)->prev == NULL))
		return (-1);

	else if (index == 0)
	{
		*head = tmp->next;
		tmp->prev = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		while (i < (index - 1) && tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}

		curr = tmp->next->next;
		free(tmp->next);
		tmp->next = curr;
		curr->prev = tmp;
		return (1);
	}

	return (1);
}

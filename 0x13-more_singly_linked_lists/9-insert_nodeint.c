#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the initialization point
 * @idx: position to add a new node
 * @n: number to add
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	new->n = n;

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	if (idx == 1)
	{
		*head = new->next;
		*head = new;
	}
	else
	{
		for (; i < idx - 1; i++)
		{
			temp = temp->next;
			if (temp == NULL)
			{
				free(new);
				return (NULL);
			}
		}
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}

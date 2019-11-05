#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: Address of the initialization point
 * @index: index of the node to be deleted
 * Return: 1 in success, -1 fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *curr;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (temp != NULL)
		{
			temp = temp->next;
		}
	}

	if (temp == NULL || temp->next == NULL)
		return (-1);

	curr = temp->next->next;
	free(temp->next);
	temp->next = curr;

	return (1);
}

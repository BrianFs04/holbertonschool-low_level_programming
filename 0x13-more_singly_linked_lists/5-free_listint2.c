#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: Address of the initialization point
 */

void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *temp;

	if (head == NULL)
		return;

	while (curr != NULL)
	{
		temp = curr->next;
		free(curr);
		curr = temp;
	}
	*head = NULL;
}

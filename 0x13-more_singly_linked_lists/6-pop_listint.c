#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: address of the initialization point
 * Return: head node
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}

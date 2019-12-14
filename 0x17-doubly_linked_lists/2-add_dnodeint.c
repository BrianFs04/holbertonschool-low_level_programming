#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the head
 * @n: address of elements
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}

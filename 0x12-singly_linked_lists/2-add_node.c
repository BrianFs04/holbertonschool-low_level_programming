#include "lists.h"
/**
 * add_node - Adds a new node at the beginning.
 * @head: Initial point
 * @str: String
 * Return: the length
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;

	new->len = i;

	if (head != NULL)
		new->next = *head;

	*head = new;

	return (*head);
}

#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list
 * @head: Initial point
 * @str: String which enters
 * Return:
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t i;
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (str == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);


	new->str = strdup(str);
	new->next = NULL;

	for (i = 0; str[i] != '\0'; i++)
		;

	new->len = i;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != 0)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}

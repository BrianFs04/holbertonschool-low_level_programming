#include "lists.h"
/**
 * add_note - Adds a new node at the beginning
 * @head: Initial point
 * @str: String
 * Return: the length
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	char *new_str = strdup(str);
	list_t *new = malloc(sizeof(list_t));

	for (i = 0; new_str[i] != '\0'; i++)
		;
	if (new == NULL)
		return (NULL);

	new->len = i;
	new->str = new_str;
	new->next = *head;
	*head = new;

	return (new);
}

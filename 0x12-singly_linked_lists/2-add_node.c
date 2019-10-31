#include "lists.h"
/**
 * add_node - Adds a new node at the beginning
 * @head: Initial point
 * @str: String
 * Return: the length
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	char *new_str = strdup(str);
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; new_str[i] != '\0'; i++)
		;

	new->len = i;
	new->str = new_str;
	if (head != NULL)
		new->next = *head;
	*head = new;

	return (new);
}

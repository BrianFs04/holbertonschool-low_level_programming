#include "lists.h"
/**
 * free_list - frees a list
 * @head: Initial point
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}

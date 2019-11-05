#include "lists.h"

/**
 * sum_listint - sums of all the data of a list
 * @head: initialization point
 * Return: the addition
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}

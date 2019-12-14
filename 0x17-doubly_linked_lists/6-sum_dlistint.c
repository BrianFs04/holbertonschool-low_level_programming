#include "lists.h"
/**
 * sum_dlistint - function that sums all nodes
 * @head: pointer to the first node of the list
 * Return: returns the sum of all the data (n) of a linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

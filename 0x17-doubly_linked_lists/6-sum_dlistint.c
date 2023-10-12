#include "lists.h"

/**
 * sum_dlistint - function returns the sum.
 * @head: pointer.
 * Return: sum of all data in list.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}

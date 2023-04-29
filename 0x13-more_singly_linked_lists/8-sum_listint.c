#include "lists.h"

/**
 * sum_listint - E
 * @head: ..
 *
 * Return:sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;

	int i, sum = 0;

	for (i = 1; ptr != NULL; i++)
	{
	sum += ptr->n;

	ptr = ptr->next;
	}
	return (sum);
}

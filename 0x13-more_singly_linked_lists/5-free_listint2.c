#include "lists.h"

/**
 * free_listint2 - E
 * @head: ..
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	return;
	else
	{
	while (*head != NULL)
	{
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	}
	}

}

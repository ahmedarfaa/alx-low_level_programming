#include "lists.h"

/**
 * free_listint2 - E
 * @head: ..
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (*head == NULL)
	return;
	else
	{
	while (ptr != NULL)
	{
	*head = ptr->next;
	free(ptr);
	ptr = *head;
	}
	}

}

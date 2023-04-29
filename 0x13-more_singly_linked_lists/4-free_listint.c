#include "lists.h"

/**
 * free_listint - E
 * @head: ..
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
	head = ptr->next;
	free(ptr);
	ptr = head;
	}

}

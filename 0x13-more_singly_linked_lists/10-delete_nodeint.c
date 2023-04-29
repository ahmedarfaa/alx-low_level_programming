#include "lists.h"

/**
 * delete_nodeint_at_index - E
 * @head: ..
 * @index: ..
 *
 * Return: 1 || -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *prev = NULL;
	unsigned int i;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (i = 0; ptr != NULL; i++)
	{
	if (i == index)
	{
		prev->next = ptr->next;
		free(ptr);
		return (1);
	}
		prev = ptr;
		ptr = ptr->next;

	}
	return (-1);


}

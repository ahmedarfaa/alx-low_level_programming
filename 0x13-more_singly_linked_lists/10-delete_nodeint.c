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
	listint_t *ptr;
	listint_t *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		prev = (*head)->next;
		free(*head);
		*head = prev;
		return (1);
	}

	ptr = *head;
	for (i = 0; i < index - 1; i++)
	{
	if (ptr->next == NULL)
	{
		return (-1);
	}
		ptr = ptr->next;
	}
	prev = ptr->next;
	ptr->next = prev->next;
	free(prev);
	return (1);


}

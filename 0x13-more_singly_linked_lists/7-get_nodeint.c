#include "lists.h"

/**
 * get_nodeint_at_index - E
 * @head: ..
 * @index: ..
 *
 * Return: pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	unsigned int i;

	if (!index)
	{
		return (NULL);
	}
	for (i = 1; ptr != NULL; i++)
	{
	if ((i - 1) == index)
	{
		return (ptr);
	}
		ptr = ptr->next;
	}
	
	return (ptr);
}


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

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
		return (NULL);
	}

	return (ptr);
}


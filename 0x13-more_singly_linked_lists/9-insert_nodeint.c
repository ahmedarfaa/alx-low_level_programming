#include "lists.h"

/**
 * insert_nodeint_at_index - E
 * @head: ..
 * @idx: ..
 * @n: ..
 *
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new_pos = malloc(sizeof(listint_t));
	unsigned int i;

	new_pos->n = n;
	new_pos->next = NULL;

	if (idx == 0)
	{
		new_pos->next = *head;
		*head = new_pos;
		return (new_pos);
	}

	for (i = 0; ptr != NULL; i++)
	{
	if (i == idx - 1)
	{
		new_pos->next = ptr->next;
		ptr->next = new_pos;
		return (new_pos);
	}

	ptr = ptr->next;
	}

	free(new_pos);
	return (NULL);

}

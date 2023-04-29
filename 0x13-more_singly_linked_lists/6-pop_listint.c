#include "lists.h"

/**
 * pop_listint - E
 * @head: ..
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{

	listint_t *ptr = *head;
	int i;

	if (*head == NULL)
	return (0);
		i = ptr->n;
		*head = ptr->next;
		free(ptr);

	return (i);
}

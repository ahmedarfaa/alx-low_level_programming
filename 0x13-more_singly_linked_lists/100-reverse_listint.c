#include "lists.h"

/**
 * reverse_listint - E
 * @head: ..
 *
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *prev = NULL;

	while (ptr != NULL)
	{
	*head = ptr->next;
	ptr->next = prev;
	prev = ptr;
	ptr = *head;

	}
	*head = prev;
	return (*head);

}

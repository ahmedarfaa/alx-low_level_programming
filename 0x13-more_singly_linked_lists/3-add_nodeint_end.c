#include "lists.h"

/**
 * add_nodeint_end - E
 * @head: ..
 * @n: ..
 *
 * Return: ..
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr1 = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));

	ptr2->n = n;
	ptr2->next = NULL;

	if (*head == NULL)
	{
	*head = ptr2;
	}
	if (ptr2 == NULL)
		return (NULL);
	else
	{
	while (ptr1->next != NULL)
	{
	ptr1 = ptr1->next;
	}
	ptr1->next = ptr2;
	}
	return (ptr2);
}

#include "lists.h"

/**
 * add_nodeint - E
 * @head: ..
 * @n: ..
 *
 * Return: ..
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr != NULL)
	{
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
	}
	else
	return (NULL);

}

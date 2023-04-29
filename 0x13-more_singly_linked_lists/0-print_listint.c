#include "lists.h"

/**
 * print_listint - E
 * @h: head of likedlist
 *
 * Return: count.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	int count = 0;

	while (p != NULL)
	{
	printf("%d\n", p->n);
	count++;
	p = p->next;
	}
	return (count);


}

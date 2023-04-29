#include "lists.h"

/**
 * listint_len - E
 * @h: ..
 *
 * Return: ..
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	const listint_t *p = h;

	if (h != NULL)
	{
		while (p != NULL)
	{
		count++;
		p = p->next;
	}
	}
	return (count);

}

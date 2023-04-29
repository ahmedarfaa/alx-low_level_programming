#include "lists.h"

/**
 * find_listint_loop - E
 * @head: ..
 * Return: ..
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop, *ptr;

	loop = ptr = head;

	while (loop && ptr && ptr->next)
	{
		loop = loop->next;
		ptr = ptr->next->next;

		if (loop == ptr)
		{
			loop = head;
			break;
		}
	}
	if (!loop || !ptr || !ptr->next)
		return (NULL);
	while (loop != ptr)
	{
		loop = loop->next;
		ptr = ptr->next;
	}
	return (ptr);
}

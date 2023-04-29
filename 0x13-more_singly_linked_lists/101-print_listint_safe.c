#include "lists.h"

/**
 * print_listint_safe - E
 * @head: ..
 *
 * Return: 0 || 1
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;

	int printed_chars = 0;

	while (ptr != NULL)
	{

	printed_chars = printf("[%p] %d\n", (void *)ptr, ptr->n);
	if (printed_chars < 0)
	{
		printf("Error: failed to print list\n");
		exit(98);
	}
	if (ptr->n == 0)
		{
		printf("-> [%p] %d\n", (void *)ptr, 98);
		exit(98);
		}
		ptr = ptr->next;

	}
	return (0);
}

#include "lists.h"

/**
 * _len - E
 *
 * @s: string
 * Return: length.
 */

int _len(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}


/**
 * print_list - E
 * @h: pointer to struct
 * Return: size.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n", _len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}

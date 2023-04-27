#include "lists.h"


/**
 * free_list - E
 *
 * @head: ..
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *node, *newnode;

	if (!head)
		return;

	node = head;
	while (node)
	{
		newnode = node->next;
		free(node->str);
		free(node);
		node = newnode;
	}
}

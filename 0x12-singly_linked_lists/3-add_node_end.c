#include "lists.h"

/**
 * add_node_end - E
 * @head: ..
 * @str: ..
 * Return: newnode.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *current = *head;

	if (!head || !newnode)
		return (NULL);

	if (str)
	{
		newnode->str = strdup(str);
		if (!newnode->str)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _len(newnode->str);
	}
	if (current)
	{
		while (current->next)
		current = current->next;
		current->next = newnode;
	}
	else
	*head = newnode;
	return (newnode);
}

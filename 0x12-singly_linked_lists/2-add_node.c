#include "lists.h"

/**
 * add_node - E
 * @head: ..
 * @str: ..
 * Return: newnode.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

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
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

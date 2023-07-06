#include "hash_tables.h"

/**
 * hash_table_set - Add | update an element in hash table.
 * @ht: A pointer to hash table.
 * @key: The key to add .
 * @value: The value of the key.
 *
 * Return: in failure 0 |  1 in success.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_element->key = strdup(key);
	if (new_element->key == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->value = value_copy;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}

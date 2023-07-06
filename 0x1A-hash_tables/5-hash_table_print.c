#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table.
 * @ht: A pointer the hash_table .
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (comma == 1)
				printf(", ");

		node = ht->array[x];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}

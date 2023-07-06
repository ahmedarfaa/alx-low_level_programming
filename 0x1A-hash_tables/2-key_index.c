#include "hash_tables.h"

/**
 * key_index - Get the Index at_Which a key/value
 * @key: ...
 * @size: ..
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

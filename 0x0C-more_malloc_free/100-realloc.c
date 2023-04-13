#include "main.h"

/**
 * _realloc - E
 * @ptr: ..
 * @old_size: ..
 * @new_size: ..
 * Return: ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *a, *x, *y;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);
	if (a == NULL)
	{
		return (NULL);
	}
	if (ptr != NULL)
	{
		x = a;
		y = ptr;
		for (i = 0; i < old_size && i < new_size; i++)
		{
			y[i] = x[i];
		}
		free(ptr);
	}
	return (a);


}

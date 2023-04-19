#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - E
 * @size: ..
 * @array: ..
 * @action: ptr
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
		while (x < size)
		{
			action(array[x]);
			x++;
		}
	}
}

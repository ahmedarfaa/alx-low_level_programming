#include "main.h"
#include <stdlib.h>

/**
 * create_array - E
 * @size: size of array
 * @c: char
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (size == 0 || ptr == 0)
		return (0);
	while (size--)
		ptr[size] = c;
	return (ptr);

}

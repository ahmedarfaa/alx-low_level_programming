#include "main.h"

/**
 * _calloc - E
 * @nmemb: ..
 * @size: ..
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);

	return (ptr);

}

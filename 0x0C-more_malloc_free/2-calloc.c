#include "main.h"

/**
 * _calloc - E
 * @nmemb: ..
 * @size: ..
 * Return: 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	int *ptr;

	l = nmemb * size;

	ptr = malloc(l);
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);


	l = 0;
	while (i < l)
	{

	ptr[i] = 0;
	i++;
	}
	return (ptr);

}

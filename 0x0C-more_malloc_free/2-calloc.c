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
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);


	l = nmemb * size;

	ptr = malloc(l);
	if (ptr == NULL)
		return (NULL);


	while (i < l)
	{

	ptr[i] = 0;
	i++;
	}
	return (ptr);

}

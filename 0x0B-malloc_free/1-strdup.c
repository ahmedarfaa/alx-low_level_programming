#include "main.h"
#include <stdlib.h>

/**
 * _strdup - E
 * @str: string
 * Return: value.
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr = malloc(i * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (j = 0; j < i; j++)
			ptr[j] = str[j];
	}
	return (ptr);
}

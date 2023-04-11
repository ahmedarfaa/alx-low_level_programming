#include "main.h"
#include <stdlib.h>

/**
 * _strdup - E
 * @str: string
 * Return: value.
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *ptr;

	if (str == 0)
		return (NULL);

	for (; str[i] != '\0'; i++)
		ptr = malloc(i * sizeof(*str) + 1);

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		for (; j < i; j++)
			ptr[j] = str[j];
	}
	return (ptr);
}

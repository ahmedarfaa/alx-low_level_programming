#include "main.h"
#include <string.h>

/**
 * _strpbrk - Entry
 * @s: pointer
 * @accept: pointer
 * Return: k.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *k;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
			{
				k = &s[i];
				return (k);
			}
	return (0);
}

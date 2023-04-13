#include "main.h"

/**
 * string_nconcat - E
 * @s1: ..
 * @s2: ..
 * @n: ..
 * Return: s1.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = strlen(s1);
	unsigned int l2 = strlen(s2);
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l2)
		n = l2;
	ptr = malloc(l1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);

}

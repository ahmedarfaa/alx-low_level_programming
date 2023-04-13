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
	unsigned int l = 0, m = 0, j = 0, i = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l])
		l++;
	while (s2[m])
		m++;

	if (n >= m)
		i = l + m;
	else
		i = l + n;
	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);
	m = 0;
	while (j < i)
	{
		if (j <= l)
			ptr[j] = s2[j];
		if (j >= l)
		{
			ptr[j] = s2[m];
			m++;
		}
		j++;

	}
	ptr[j] = '\0';

	return (ptr);

}

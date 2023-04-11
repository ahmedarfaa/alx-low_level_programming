#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - E
 * @s1: string1
 * @s2: string2
 * Return: value.
 */

char *str_concat(char *s1, char *s2)
{
	int l = 0, l1 = 0, l2 = 0;
	int i;
	char *ptr;

	
	if (s1 == NULL)
	s1 ="";
	if (s2 == NULL)
	s2 = "";

	while (s1[l1])
	{
	l1++;
	}
	while (s2[l2])
	{
		l2++;
	}
	l = l1 + l2;
	ptr = malloc((sizeof(char) * l) + 1);
	if (ptr == NULL)
	return (NULL);
	l2 = 0;
	for (i = 0; i < l; i++)
	{
		if (i <= l1)
		ptr[i] = s1[i];
		if (i >= l1)
		{
		ptr[i] = s2[l2];
		l2++;
		}
	}

	ptr[i] = '\0';

	return (ptr);

}

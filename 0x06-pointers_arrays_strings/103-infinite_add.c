#include "main.h"
#include <stdio.h>

/**
 * infinite_add - E
 * @n1: b
 * @n2: b
 * @r: s
 * @size_r: size
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, l = 0, k, a, b, o = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);

	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			a = n1[i] - '0';
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - '0';
		else
			b = 0;
	r[k] = (a + b + o) % 10 + '0';
	o = (a + b + o) / 10;
	}
	if (o == 1)
	{	r[l + 1] = '\0';
		if ((l + 2) > size_r)
			return (0);
		while (l-- >= 0)
		r[l + 1] = r[l];
		r[0] = o + '0';
	}
	return (r);
}

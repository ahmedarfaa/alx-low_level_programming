#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - E
 * @ac: ..
 * @av: ..
 * Return: a.
 */

char *argstostr(int ac, char **av)
{
	int l = 0, x = 0, y = 0, z = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		while (av[x][y])
		{
			l++;
			y++;
		}
		y = 0;
		x++;
	}
	a = malloc((sizeof(char) * l) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			a[z] = av[x][y];
			z++;
			y++;

		}
		a[z] = '\n';

		y = 0;
		z++;
		x++;

	}
	z++;
	a[z] = '\0';

	return (a);

}

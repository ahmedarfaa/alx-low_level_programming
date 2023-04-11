#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * ahmed - E
 * @s: ..
 * Return: n.
 */

int ahmed(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;

	}
	n++;
	return (n);

}

/**
 * strtow - E
 * @str: ..
 * Return: s.
 */

char **strtow(char *str)
{
	int x, y, z, l, i = 0, wc = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	i = ahmed(str);
	if (i == 1)
		return (NULL);
	s = (char **)malloc(i * sizeof(char *));
	if (s == NULL)
		return (NULL);
	s[i - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (y = 1; str[x + y] != ' ' && str[x + y]; y++)
				;
			y++;
			s[wc] = (char *)malloc(y * sizeof(char));
			y--;
			if (s[wc] == NULL)
			{
				for (z = 0; z < wc; z++)
					free(s[z]);
				free(s[i - 1]);
				free(s);
				return (NULL);
			}
			for (l = 0; l < y; l++)
				s[wc][l] = str[x + l];
			s[wc][l] = '\0';
			wc++;
			x += y;
		}
		else
			x++;
		}
	return (s);
}

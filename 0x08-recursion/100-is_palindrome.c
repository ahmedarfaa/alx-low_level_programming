#include <stdio.h>
#include "main.h"

/**
 * len - E
 * @s: var
 * Return: n.
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + len(s + 1));
}


/**
 * comp - E
 * @s: pointer
 * @x: var
 * @y: var
 * Return: n.
 */

int comp(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + comp(s, x + 1, y - 1));
	}
	return (0);
}


/**
 * is_palindrome - E
 * @s: var
 * Return: n.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, len(s) - 1));
}

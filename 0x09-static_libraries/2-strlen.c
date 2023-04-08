#include <stdio.h>

/**
 * _strlen -E
 * @s: pointer
 * Return: 0.
 */

size_t _strlen(const char *s)
{

	size_t l = 0;

	while (*s++)
		l++;
	return (l);




}

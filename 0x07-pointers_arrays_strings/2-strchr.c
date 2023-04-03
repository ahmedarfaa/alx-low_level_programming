#include "main.h"
#include <string.h>
/**
 * _strchr - Entry
 * @s: pointer
 * @c: letter
 * Return: string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
	{
	return (s + i);
	}
	}
}

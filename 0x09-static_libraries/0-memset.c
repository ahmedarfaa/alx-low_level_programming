#include "main.h"
#include <string.h>

/**
 * _memset - Entery
 * @s: pointer
 * @b: string
 * @n: number of bytes
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);


}

#include "main.h"
#include <string.h>
/**
 * *_strncat - EP
 * @dest: p
 * @src: p
 * @n: V
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

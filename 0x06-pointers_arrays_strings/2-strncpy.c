#include "main.h"
#include <string.h>
/**
 * *_strncpy - EP
 * @dest: p
 * @src: p
 * @n: V
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

#include "main.h"
#include <string.h>

/**
 * _memcpy - Entery
 * @dest: pointer
 * @src: string
 * @n: number of bytes
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        memcpy(dest, src, n);
        return (dest);


}

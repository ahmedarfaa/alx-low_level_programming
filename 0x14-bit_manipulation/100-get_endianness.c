#include "main.h"

/**
 * get_endianness - E
 * Return: ..
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *p = (char *) &x;

	return (*p);
}

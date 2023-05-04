#include "main.h"

/**
 * get_bit - E
 * @n: ..
 * @index: ..
 * Return: ..
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;

	return (i);
}

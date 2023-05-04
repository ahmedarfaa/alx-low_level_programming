#include "maim.h"

/**
 * flip_bits - E
 * @n: ..
 * @m: ..
 * Return: ..
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int cu;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cu = ex >> i;
		if (cu && 1)
			count++;
	}
	return (count);
}

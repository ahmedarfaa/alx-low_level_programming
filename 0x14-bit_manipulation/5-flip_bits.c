#include "main.h"

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

	for (x = 63; x >= 0; x--)
	{
		cu = ex >> x;
		if (cu & 1)
			count++;
	}
	return (count);
}

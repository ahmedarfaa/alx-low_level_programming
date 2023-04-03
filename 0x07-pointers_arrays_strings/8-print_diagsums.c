#include "main.h"

/**
 * print_diagsums - E
 * @a: pointer
 * @size: var
 * Return: 0.
 */

void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i];
		y = y + a[size - i - 1];
		a = a + size;
	}
	printf("%d, ", x);
	printf("%d\n", y);
}

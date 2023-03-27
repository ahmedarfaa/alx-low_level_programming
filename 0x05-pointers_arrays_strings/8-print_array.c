#include <stdio.h>
#include "main.h"
/**
 * print_array - E
 * @a: i
 * @n: i
 * Return: 0.
 */


void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
	if (j != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");

}

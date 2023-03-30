#include "main.h"
/**
 * reverse_array - E
 * @a: p
 * @n: var
 * Return: 0.
 */



void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = n - 1; i >= n / 2; i--)
	{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
}

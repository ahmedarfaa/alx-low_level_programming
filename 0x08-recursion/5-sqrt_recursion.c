
#include "main.h"

/**
 * _sqrt_recursion - E
 * @n: var
 * Return: 0.
 */

int _sqrt_recursion(int n)
{
	return (_ahmed(n, 1));
}
/**
 * _ahmed- E
 * @n: var
 * @x: var
 * Return: 0.
 */
int _ahmed(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	else
		return (_ahmed(n, x + 1));
}

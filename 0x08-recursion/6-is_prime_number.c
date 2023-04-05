#include <stdio.h>
#include "main.h"

/**
 * prime - E
 * @n: var
 * @x: var
 * Return: n.
 */
int prime(int n, int x)
{
	if (n <= 1)
		return (0);
	if (n % x == 0 && x > 1)
		return (0);
	if ((n / x) < x)
		return (1);
	return (prime(n, x + 1));
}

/**
 * is_prime_number - E
 * @n: var
 * Return: n.
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}

#include "main.h"

/**
 * factorial - E
 * @n: pointer
 * Return: 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

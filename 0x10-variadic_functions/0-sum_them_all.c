#include "variadic_functions.h"

/**
 * sum_them_all - E
 * @n: ..
 * Return: a.
 */

int sum_them_all(const unsigned int n, ...)
{
	int a = 0, x = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (x--)
		a += va_arg(ap, int);
	va_end(ap);
	return (a);
}

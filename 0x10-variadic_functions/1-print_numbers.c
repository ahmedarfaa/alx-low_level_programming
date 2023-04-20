#include "variadic_functions.h"

/**
 * print_numbers - E
 * @separator: ..
 * @n: ..
 * @...: ..
 * Return: a.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%d%s", va_arg(ap, int), x ? (separator ? separator : "") : "\n");
	va_end(ap);
}

#include "main.h"

/**
 * print_binary - E
 * @n: ..
 * Return: ..
 */
void print_binary(unsigned long int n)
{
	int x;
	unsigned long int count = 0;

	for (x = 63; x >= 0; x--)
	{
		count = n >> x;

		if (count & x)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

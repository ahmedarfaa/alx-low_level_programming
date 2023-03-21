#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int c;

	if (x < 0)
		x = -x;

	c = x % 10;

	if (c < 0)
		c = -c;

	_putchar(c + '0');

	return (c);
}

#include "main.h"
/**
 * puts_half - E
 * @str: pointer
 * Return: 0.
 */

void puts_half(char *str)
{
		long int x = 0;
		long int y;

		while (str[x] != '\0')
		{
			x++;
		}

		if (x % 2 == 1)
		{
			y = (x - 1) / 2;
			y += 2;
		}
		else
		{	y = x / 2;
		}
		for (; y < x; y++)
		{
			_putchar(str[y]);
		}
		_putchar('\n');

}

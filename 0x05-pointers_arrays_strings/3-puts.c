#include "main.h"

/**
 * _puts - E
 * @s: pointer
 * Return: 0.
 */

void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{	_putchar(*s);
	}
	_putchar('\n');

}

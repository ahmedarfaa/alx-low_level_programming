#include "main.h"

/**
 * _puts_recursion - E
 * @s: pointer
 * Return: 0.
 */

void _puts_recursion(char *s)
{
	if (*S == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	*s++;
	_puts_recursion(s);

}

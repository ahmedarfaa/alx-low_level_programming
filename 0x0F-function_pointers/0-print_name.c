#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - E
 * @f: pointer to function
 * @name: ..
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

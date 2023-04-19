#include "function_pointers.h"

/**
 * print_name - E
 * @f: pointer to function
 * @name: ..
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}

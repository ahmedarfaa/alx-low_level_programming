#include "main.h"

/**
 * _isupper - E
 * @c: Default
 * Return: 0.
 */

int _isupper(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);


	return (0);
}

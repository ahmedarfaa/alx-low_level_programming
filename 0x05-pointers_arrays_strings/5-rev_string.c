
#include <stdio.h>
/**
 * rev_string - E
 * @s: p
 * Return: 0.
 */

void rev_string(char *s)
{
	int i = 0, l = 0;

	char temp;

	while (s[i++])

		l++;


	for (i = l - 1; i >= l / 2; i--)
	{
	temp = s[i];
	s[i] = s[l - i - 1];
	s[l - i - 1] = temp;

	}


}

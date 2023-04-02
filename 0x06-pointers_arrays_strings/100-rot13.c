#include "main.h"
#include <stdio.h>

/**
* rot13 - rot13.
* @a: the string
*
* Return: A pointer.
*/
char *rot13(char *a)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = beta[j];
				break;
			}
		}

	}
		return (a);
}

#include "main.h"

/**
 * main - porto
 *
 * Description: Print_alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{	putchar(alpha);
	}
	putchar('\n');

}

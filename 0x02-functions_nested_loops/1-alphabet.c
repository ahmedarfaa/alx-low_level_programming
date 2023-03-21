#include <stdio.h>

/**
 * main - check the code
 *
 * print_alphabet - Proto
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{	putchar(alpha);
	}
	putchar('\n');

}

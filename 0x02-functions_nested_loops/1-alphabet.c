#include <stdio.h>

void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
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

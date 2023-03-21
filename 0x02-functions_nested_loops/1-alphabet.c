#include "main.h"

void print_alphabet(void);

/**
 * main - porto
 *
 * Description: Print_alphabet
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

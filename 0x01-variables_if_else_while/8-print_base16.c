#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 48 ; num <= 57 ; num++)
		putchar(num);
	for (alpha = 97 ; alpha <= 102 ; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

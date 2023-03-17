#include <stdlib.h>
#include <time.h>
/**
 * main - Main entry point
 *
 * Description: A C program
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n;
	int ld = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
	if (ld >= 5)
	{	printf("Last digit of %d is %d and %d greater than 5\n", n, ld, ld);
	}
	else if (ld < 6 && ld != 0)
	{	printf("Last digit of %d is %d and %d less than 6 and not 0\n", n, ld, ld);
	}
	if (ld == 0)
	{	printf("Last digit of %d is %d and is 0\n", n, ld, ld);
	}
	return (0);
}

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
	int y = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	y = n % 10;
	if (y >= 5)
	{	printf("Last digit of %d is %d and %d greater than 5\n", n, y, y);
	}
	else if (y < 6 && y != 0)
	{	printf("Last digit of %d is %d and %d less than 6 and not 0\n", n, y, y);
	}
	if (y == 0)
	{	printf("Last digit of %d is %d and is 0\n", n, y, y);
	}
	return (0);
}

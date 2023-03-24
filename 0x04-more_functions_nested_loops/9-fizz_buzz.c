#include <stdio.h>
/**
 * main - E
 * Return: 0.
 */

int main(void)
{
	int i, i3, i5;


	for (i = 1; i <= 100; i++)
	{
		i3 = i % 3;
		i5 = i % 5;

		if (i3 == 0)
		{	printf("Fizz");
			printf(" ");
		}
		else if (i5 == 0)
		{	printf("Buzz");
			printf(" ");
		}
		else
		{	printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

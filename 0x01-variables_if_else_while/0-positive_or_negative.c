#include <stdio.h>
 /**
  * main  Main Entry point
  *
  * Description: A C program useing if and else if
  *
  * Return: return 0 (success)
 */

int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{	printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);


	return (0);
}

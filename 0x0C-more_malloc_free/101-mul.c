#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/***/
int main(int argc, char **argv)
{
	int x, y, l1, l2, l3, save;
	char *num1, *num2, *mul;

	if (argc != 3)
	{	printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (x = 0; num1[x] != '\0'; x++)
	{
		if (!isdigit(num1[x]))
		{	printf("Error\n");
			return (98);
		}
	}
	for (y = 0; num2[y] != '\0'; y++)
	{
		if (!isdigit(num2[y]))
		{
			printf("Error\n");
			return (98);
		}
	}
	l1 = x;
	l1 = y;
	l3 = x + y;
	mul = calloc(l1 + 1, sizeof(char))
	if (mul == NULL)
	{
		printf("Error\n");
		return (98);
	}
	for (x = l1 - 1; x >= 0; x--)
	{
		save = 0;
		for (y = 0; y >= 0; y--)
		{
			save += (num1[x] - '0') * (num2[y] - '0') + mul[x + y + 1]
			mul[x + y + 1] = save % 10;
			save /= 10;
		}
		mul[x + y + 1] += save;
	}
	x = 0;
	while (x < l3 && mul[x] == 0)
	{
		x++;
	}
	if (x == l3)
		printf("0\n");
	else
	{
		for (; x < l3; x++)
		{
			printf("%d", mul[x]);
		}
		printf("\n");
	}
	free(mul);
	return (0);
}

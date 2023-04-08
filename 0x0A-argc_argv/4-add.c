#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - E
 * @argc: v
 * @argv: v
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			for (j = 0; j < strlen(s); j++)
			{
				if (s[j] < 48 || s[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(s);
			s++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);

}

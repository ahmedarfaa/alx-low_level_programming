#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_error - E
 * Return:..
 */

void print_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * is_valid_number - E
 * @str: ..
 * Return: 1.
 */

int is_valid_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (!isdigit(str[i]))
	{
		return (0);
	}
	}
	return (1);
}
/**
 * main - E
 * @argc: ..
 * @argv: ..
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i, j, k, carry, len1, len2, len3;
	char *num1, *num2, *result;

	if (argc != 3)
	{
	print_error();
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		print_error();
	}

		len1 = strlen(num1);
		len2 = strlen(num2);
		len3 = len1 + len2;
		result = calloc(len3 + 1, sizeof(char));

	if (result == NULL)
	{
		print_error();
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
	for (j = len2 - 1, k = i + j + 1; j >= 0; j--, k--)
	{
		carry += (num1[i] - '0') * (num2[j] - '0') + result[k];
		result[k] = carry % 10;
		carry /= 10;
	}
		result[k] += carry;
	}

	i = 0;
	while (i < len3 && result[i] == 0)
	{
		i++;
	}

	if (i == len3)
	{
		printf("0\n");
	}
	else
	{
	for (; i < len3; i++)
	{
	printf("%d", result[i]);
	}
	printf("\n");
	}

	free(result);

	return (0);
}

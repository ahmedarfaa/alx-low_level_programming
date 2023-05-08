#include "main.h"

char *cre(char *file);
void close_fi(int f);

/**
 * creat - E
 * @file: ..
 * Return: ..
 */

char *cre(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_fi - E
 * @f: ..
 * Return: ..
 */
void close_fi(int f)
{
	int c;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * main - E
 * @argc: ..
 * @argv: ..
 * Return: .
 */

int main(int argc, char **argv)
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = cre(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(to, buf, r);

		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_fi(from);
	close_fi(to);
	return (0);
}

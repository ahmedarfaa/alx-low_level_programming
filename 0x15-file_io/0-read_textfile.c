#include "main.h"

/**
 * read_textfile - E
 * @filename: ..
 * @letters: ..
 * Return: length or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file;
	ssize_t wroten, re;
	char *buf;

	file = open(filename, O_RDONLY);

		if (file == -1)
		{
			return (0);
		}
	buf = malloc(sizeof(char) * letters);
	re = read(file, buf, letters);
	wroten = write(STDOUT_FILENO, buf, re);
	free(buf);
	close(file);
	return (wroten);
}

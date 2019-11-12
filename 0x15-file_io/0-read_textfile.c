#include "holberton.h"
/**
 * read_textfile - reads a text file and prints
 * @filename: file
 * @letters: count of characters
 * Return: Number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, wr, rd;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);

	wr = write(STDOUT_FILE, buf, rd);

	if (wr == -1)
		return (0);

	close(fd);
	return (wr);
}

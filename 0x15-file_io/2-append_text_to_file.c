#include "holberton.h"
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: file's name
 * @text_content: file's content
 * Return: 1 if success, -1 if it doesn't
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		wr = write(fd, text_content, len);

		if (wr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

#include "holberton.h"
/**
 * copy_file - function that copies the content of a file to another
 * @file_from: Received file
 * @file_to: File in which it's saved the copy
 * Return: The copy
 */
int copy_file(char *file_from, char *file_to)
{
	int fd1, fd2, wr2;
	unsigned long int rd1;
	char *buff = malloc(1024);

	fd1 = open(file_from, O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}


	rd1 = read(fd1, buff, sizeof(buff));

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while (rd1 != 0)
		wr2 = write(fd2, buff, rd1);

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	free(buff);
	return (wr2);
}
/**
 * main - main function
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}

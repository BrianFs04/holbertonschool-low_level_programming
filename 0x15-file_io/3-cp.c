#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * copy_file - function that copies the content of a file to another
 * @file_from: Received file
 * @file_to: File in which it's saved the copy
 * @argv: argument vector
 * Return: The copy
 */
int copy_file(char *file_from, char *file_to, char *argv[])
{
	int fd1, fd2, rd1;
	char *buff;

	fd1 = open(file_from, O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	buff = malloc(1024);
	while ((rd1 = read(fd1, buff, 1024)) != 0)
	{
		if ((write(fd2, buff, rd1)) != rd1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

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
	return (0);
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
	copy_file(argv[1], argv[2], argv);
	return (0);
}

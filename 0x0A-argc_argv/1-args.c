#include <stdlib.h>
#include <stdio.h>
/**
 * main - number of argument passed into it
 * @argc: number of arguments
 * @argv: unused
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;
	(void) argv;

	printf("%d\n", i);
	return (0);
}

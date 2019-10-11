#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints its name
 * @argc: size of the argv array
 * @argv: an array of pointers to the strings
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (i < argc)
		printf("%s\n", argv[i]);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: size of the argv array
 * @argv: an array of pointers to the strings
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

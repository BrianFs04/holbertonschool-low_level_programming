#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: size of the argv array
 * @argv: numbers to sum
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0, iti = 1;

	for (; i < argc; i++)
	{
		if (isdigit(*argv[1]))
		{
			sum += atoi(argv[i]);
		}
		if (!(isdigit(*argv[iti++])))
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

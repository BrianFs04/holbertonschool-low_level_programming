#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: size of the argv array
 * @argv: numbers to multiply
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int i = 1, mul = 1;

	if (argc == 3)
	{
		for (; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

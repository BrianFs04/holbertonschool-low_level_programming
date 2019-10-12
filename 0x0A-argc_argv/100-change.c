#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that adds positive numbers
 * @argc: size of the argv array
 * @argv: numbers to sum
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int a = 0;
	int canti = 0;
	int change = atoi(argv[argc - 1]);

	if (argc == 2)
	{
		while (change > 0)
		{
			canti += change / cents[a];
			change = change % cents[a];
			if (change % cents[a] != 0)
			{
				a++;
			}
		}
		printf("%d\n", canti);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

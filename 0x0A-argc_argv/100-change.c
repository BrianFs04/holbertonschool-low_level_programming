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
	int i = 1;
	int a = 0;
	int mini;
	int change = atoi(argv[i]);

	if (argc == 2)
	{
		if (change < 0)
		{
			printf("0\n");
			return (0);
		}
		while (change > 0)
		{
		        mini += change / cents[a];
			change = change % cents[a];
			if (change != 0)
			{
				a++;
			}
		}
		printf("%d\n", mini);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

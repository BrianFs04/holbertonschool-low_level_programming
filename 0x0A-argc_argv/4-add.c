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
	int i, j, res;

	res = 0;
	i = 1;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			res += atoi(argv[i]);
			j++;
		}
		i++;
	}
	printf("%d\n", res);
	return (0);
}

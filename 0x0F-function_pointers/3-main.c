#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - calculator
 * @argc: size of the argv array
 * @argv: numbers to operate
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int (*ope)(int, int);
	int resul;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] != 43 && *argv[2] != 45 && *argv[2] != 42
	    && *argv[2] != 47 && *argv[2] != 37) || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == 47 || *argv[2] == 37) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	ope = get_op_func(argv[2]);
	resul = ope(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resul);
	return (0);
}

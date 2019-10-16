#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcat - concatenates two strings
 * @dest: Hello
 * @src: World!
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
	{
		dest[i++] = src[n];
		n++;
	}
	return (dest);
}
/**
 * argstostr - concatenates all the arguments}
 * @ac: element counter
 * @av: elements
 * Return: a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *a, *jump;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
				;
		}
		a = malloc(i * sizeof(char) + 1);
		jump = "\n";

		for (i = 0; i < ac; i++)
		{
			a = _strcat(a, av[i]);
			if (a == NULL)
				return (NULL);
			if ((i + 1) < ac)
			{
				a = _strcat(a, jump);
				if (a == NULL)
					return (NULL);
			}
		}
	}
	a = _strcat(a, jump);
	if (a == NULL)
		return (NULL);
	return (a);
}

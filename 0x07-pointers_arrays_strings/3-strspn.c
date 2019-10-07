#include "holberton.h"
/**
 * _strspn - length of a prefix substring
 * @s: Pointer to a string
 * @accept: Certain characters of the string
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] != accept[j]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: Pointer to a string
 * @accept: Certain characters of the string
 * Return: Number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
		}
	}
	return (0);
}

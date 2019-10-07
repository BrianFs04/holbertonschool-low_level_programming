#include "holberton.h"
/**
 * _strchr - fills memory with a constant byte
 * @s: Pointer to a string
 * @c: Certain characters of the string
 * Return: Pointer elements
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		s++;
	}
	return ('\0');
}

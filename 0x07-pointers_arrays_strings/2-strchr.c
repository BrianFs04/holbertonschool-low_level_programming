#include "holberton.h"
/**
 * _strchr - fills memory with a constant byte
 * @s: Pointer to a string
 * @c: Certain characters of the string
 * Return: Pointer elements
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}

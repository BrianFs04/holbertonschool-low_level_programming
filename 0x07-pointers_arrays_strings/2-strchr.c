#include "holberton.h"
/**
 * _strchr - locates a character in a string
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
	if (*s != c)
	{
		return ('\0');
	}
	return (s);
}

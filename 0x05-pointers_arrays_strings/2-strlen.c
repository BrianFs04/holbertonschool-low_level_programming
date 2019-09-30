#include "holberton.h"
/**
 * _strlen - counts the length of a string
 *@s: Pointer to char
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

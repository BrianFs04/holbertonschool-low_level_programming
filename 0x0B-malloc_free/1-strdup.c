#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts the length of a string
 *@s: Pointer to char
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * *_strcpy - copies the string
 * @dest: buffer pointed to char
 * @src: string pointed to src
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * _strdup - copy of the string given as a parameter
 * @str: string
 * Return: a copy of the string
 */

char *_strdup(char *str)
{
	char *a;

	if (str == '\0')
	{
		return (NULL);
	}
	a = malloc((_strlen(str) * sizeof(char)) + 1);
	if (a == '\0')
	{
		return (NULL);
	}
	_strcpy(a, str);
	return (a);
}

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
 * _strncat - concatenates two strings
 * @dest: Array of destiny
 * @src: It's where we storage the dest in
 * @n: Position to print
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	return (dest);
}

/**
 * _strcat - concatenates
 * two strings
 * @dest: Hello
 * @src: World!
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
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to print
 * Return: Concatenation
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int lon = _strlen(s2);

	a = malloc((_strlen(s1) + _strlen(s2)) + 1);

	if (a == NULL)
	{
		return (NULL);
	}
	_strcat(a, s1);

	if (lon >= n)
	{
		_strncat(a, s2, n);
	}
	return (a);
}

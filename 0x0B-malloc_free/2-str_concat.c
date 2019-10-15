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
 * str_concat - concatenates two string
 * @s1: String 1
 * @s2: String 2
 *
 * Return: concatenation of the strings
 */

char *str_concat(char *s1, char *s2)
{
	char *a = NULL;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	a = malloc((_strlen(s1) + _strlen(s2) * 1) + 1);
	if (!a)
	{
		return (NULL);
	}
	_strcat(a, s1);
	_strcat(a, s2);
	return (a);
}

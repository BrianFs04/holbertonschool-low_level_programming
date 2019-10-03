#include "holberton.h"
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

#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: Array of destiny
 * @src: It's where we storage the dest in
 * @n: Position to print
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

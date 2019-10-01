#include "holberton.h"
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

#include "holberton.h"
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
	return(dest);
}

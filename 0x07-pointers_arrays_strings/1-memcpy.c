#include "holberton.h"
/**
 * _memcpy - fills memory with a constant byte
 * @dest: Memory area
 * @src: Constant byte
 * @n: Bytes filled
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

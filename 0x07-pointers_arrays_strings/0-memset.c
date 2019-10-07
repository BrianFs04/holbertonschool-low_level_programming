#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Array of destiny
 * @b: Constant byte
 * @n: Bytes filled
 * Return: The pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i = 0;

        while (i < n)
        {
		*(s + i) = b;
		i++;
        }
        return (s);
}

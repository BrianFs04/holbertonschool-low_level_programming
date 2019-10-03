#include "holberton.h"
/**
 * string_toupper - reverses the content of an array of integers
 * @c: Pointer to a char
 * Return: uppercase letters
 */
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}

#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: Pointer to a char
 *
 */
void rev_string(char *s)
{
	int len = 0, i, res;
	char temp;

	while (s[len] != '\0')
		len++;

	res = len / 2;

	for (i = 0; i < res; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

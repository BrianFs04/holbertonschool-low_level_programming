#include "holberton.h"
/**
 * cap_string - reverses the content of an array of integers
 * @c: Pointer to a char
 *
 * Return: Uppercase letters
 */
char *cap_string(char *c)
{
	char req[] = {'\t', ' ', '\n', ',', ';', '.', '!', '?', '"', '(', ')'
		      , '{', '}'};
	int i = 0, n;

	while (c[i] != '\0')
	{
		if (i == 0)
		{
			c[i + 1] -= 32;
		}
		n = 0;
		while (req[n] != '\0')
		{
			if (c[i] == req[n] && c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] -= 32;
			}
			n++;
		}
		i++;
	}
	return (c);
}

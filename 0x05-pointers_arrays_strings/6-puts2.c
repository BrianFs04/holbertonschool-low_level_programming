#include "holberton.h"
/**
 * puts2 - prints every othe character of a string
 * @str: pointer to a string
 */
void puts2(char *str)
{
        int len = 0, c;

	while (str[len] != '\0')
	{
		len++;
	}
	for (c = 0; c < len; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

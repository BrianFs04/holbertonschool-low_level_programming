#include "holberton.h"
/**
 * puts2 - prints every othe character of a string
 * @str: pointer to a string
 */
void puts2(char *str)
{
	int len;
	char b;

	for (len = 0; str[len] != '\0'; len += 2)
	{
		b = str[len];
		_putchar(b);
	}
	_putchar('\n');
}

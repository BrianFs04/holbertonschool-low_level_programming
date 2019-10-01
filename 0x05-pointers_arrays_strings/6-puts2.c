#include "holberton.h"
/**
 * puts2 - prints every othe character of a string
 * @str: pointer to a string
 */
void puts2(char *str)
{
	int a;
	char b;

	for (a = 0; str[a] != '\0'; a += 2)
	{
		b = str[a];
		_putchar(b);
	}
	_putchar('\n');
}

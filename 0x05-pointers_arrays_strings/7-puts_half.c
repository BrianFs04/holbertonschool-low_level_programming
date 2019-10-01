#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: Pointer to a char
 *
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		len = len / 2;
	else
		len = (len - 1) / 2;
	while (str[len] != '\0')
	{
		i = str[len];
		len++;
		_putchar(i);
	}
	_putchar('\n');
}

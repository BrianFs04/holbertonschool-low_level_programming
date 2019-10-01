#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: Pointer to a char
 *
 */
void puts_half(char *str)
{
	int len = 0, i, res;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		res = len / 2;
	else
		res = (len - 1) / 2;
	while (str[res] != '\0')
	{
		i = str[res];
		_putchar(i);
		res++;
	}
	_putchar('\n');
}

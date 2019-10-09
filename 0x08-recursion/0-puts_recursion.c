#include "holberton.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(++s);
	}
	else
		putchar('\n');
}

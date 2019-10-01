#include "holberton.h"
/**
 * print_rev - prints a string in reverse using pointers
 *@s: pointer to char
 *
 */
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (s[c] != '\0')
		++c;
	for (i = c; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

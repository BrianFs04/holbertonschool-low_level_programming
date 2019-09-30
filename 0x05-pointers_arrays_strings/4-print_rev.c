#include "holberton.h"
/**
 * print_rev - prints a string in reverse using pointers
 *@s: pointer to char
 *
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}

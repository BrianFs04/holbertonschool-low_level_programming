#include "holberton.h"

/**
 * print_alphabet_x10 - writes the alphabet 10 times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	char a;
	int b = 0;

	while (b < 10)
	{
		for(a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		b++;
		_putchar('\n');
	}
}

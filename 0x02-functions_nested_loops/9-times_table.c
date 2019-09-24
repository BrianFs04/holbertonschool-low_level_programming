#include "holberton.h"

/**
 * times_table - writes the 9 times table starting with 0
 *
 * Return: All times table.
 */
void times_table(void)
{
	int a = 0, b, res;

	while (a <= 5)
	{
		b = 0;
		while (b <= 9)
		{
			res = a * b;
			_putchar(res + '0');
			if (b != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * times_table - writes the 9 times table starting with 0
 *
 * Return: All times table.
 */
void times_table(void)
{
	int a = 0, b, res;

	while (a <= 9)
	{
		_putchar('0');
		b = 1;
		while (b <= 9)
		{
			_putchar(',');
			_putchar(' ');
			res = a * b;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

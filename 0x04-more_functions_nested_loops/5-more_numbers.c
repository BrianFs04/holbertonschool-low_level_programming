#include "holberton.h"
/**
 * more_numbers - 10 times the numbers from 0 to 14
 *
 *
 */
void more_numbers(void)
{
	int a = 0, b;

	while (a < 10)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
		}
		_putchar('\n');
		a++;
	}
}

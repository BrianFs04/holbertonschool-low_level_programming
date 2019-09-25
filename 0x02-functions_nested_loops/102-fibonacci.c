#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 0, b = 1, c, sum;

	for (c = 0; c < 50; c++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (c < 49)
		{
			printf("%li, ", sum);
		}
		else
		{
			printf("%li\n", sum);
		}
	}
	return (0);
}

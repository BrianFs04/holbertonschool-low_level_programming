#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: values
 * Return: the addition of values
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	int res;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		res = va_arg(args, int);

		sum += res;
	}

	va_end(args);
	return (sum);
}
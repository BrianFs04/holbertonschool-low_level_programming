#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed
 * @n: integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int res;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		res = va_arg(args, int);

		printf("%d", res);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

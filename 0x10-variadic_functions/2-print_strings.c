#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *word;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		word = va_arg(args, char*);
		if (word == NULL)
			printf("(nil)");
		else
			printf("%s", word);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}

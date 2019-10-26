#include "variadic_functions.h"
/**
 * print_char - function that prints chars
 * @args: arguments
 */
void print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	printf("%c", c);
}
/**
 * print_int - function that prints ints
 * @args: arguments
 */
void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * print_float - function that prints floats
 * @args: arguments
 */
void print_float(va_list args)
{
	double f;

	f = va_arg(args, double);
	printf("%f", f);
}
/**
 * print_string - function that prints strings
 * @args: arguments
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char*);
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i, j;
	dataTypes type[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	i = 0;
	va_start(valist, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j <= 3)
		{
			if (format[i] == type[j].a)
			{
				type[j].f(valist);
				if (i < format[i + 1])
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
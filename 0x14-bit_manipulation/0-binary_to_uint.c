#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an int
 * @b: pointer to a string
 * Return: 0 if it is NULL or if it's not 1 or 0
 * and return the decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i, res, pos;

	i = 0;
	res = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	i = i - 1;
	pos = 0;

	while (i >= 0)
	{
		res += (b[i] - '0') << pos;
		pos++;
		--i;
	}

	return (res);
}

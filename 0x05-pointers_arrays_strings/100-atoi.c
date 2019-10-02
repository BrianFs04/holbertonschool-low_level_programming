#include "holberton.h"
/**
 * _atoi - function that converst a string to an integer
 * @s: pointer to a char
 *
 * Return: the digit '-' operation
 */
int _atoi(char *s)
{
	int i = 1, n, neg = 1, divi = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		if ((s[n] >= '0') && (s[n] <= '9'))
		{
			divi = divi * 10 + (s[n] - '0');
		}
		else if (s[n] == '-')
		{
			neg = neg * -1;
		}
		else if (divi > 0)
		{
			break;
		}
	}
	return (divi * neg);
}

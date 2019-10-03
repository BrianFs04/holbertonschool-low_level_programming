#include "holberton.h"
/**
 * _strcmp - concatenates two strings
 * @s1: Pointer to a char 1
 * @s2: Pointer to a char 2
 *
 * Return: The substraction between the comparison
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

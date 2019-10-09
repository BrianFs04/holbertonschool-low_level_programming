#include "holberton.h"
/**
 * _strlen - length of the string
 *@s: pointer to a string
 *
 * Return: length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen(s) + 1);
}

/**
 * _strcom - compares the element in the position
 * @s: pointer to a string
 * @len: len of the string
 * Return: comparaison
 */
int _strcom(char *s, int len)
{
	if (*s != s[len])
		return (0);
	else if (*s == '\0')
		return (1);
	return (_strcom(s + 1, len - 2));
}

/**
 * is_palindrome - if the string is a palindrome
 * @s: pointer to a string
 *
 * Return: 1 if a string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int a, b;

	a = _strlen(s);
	b = _strcom(s, a - 1);
	return (b);
}

#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: Pointer to a string
 * @needle: Pointer to a string 2
 * Return: The match word
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;

		while (*j == *haystack && *j != '\0' && *haystack  != '\0')
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
		{
			return (i);
		}
		haystack = i + 1;
	}
	return ('\0');
}

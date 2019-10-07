#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: Pointer to a string
 * @needle: Pointer to a string 2
 * Return: The match word
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a] == needle[b])
			{
				haystack = needle;
				return (haystack);
			}
		}
	}
	return (0);
}

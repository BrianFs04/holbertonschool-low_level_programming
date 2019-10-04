#include "holberton.h"
/**
 * rot13 - encondes a string using rot13
 * @s: Pointer to a char
 *
 * Return: rot13
 */
char *rot13(char *s)
{
	char n[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char c[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; n[j] != '\0'; j++)
		{
			if (s[i] == n[j])
			{
				s[i] = c[j];
				break;
			}
		}
	}
	return (s);
}

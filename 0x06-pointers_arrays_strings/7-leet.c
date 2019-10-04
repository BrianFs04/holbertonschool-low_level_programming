#include "holberton.h"
/**
 * leet - encondes a string into 1337
 * @s: Pointer to a char
 *
 * Return: leet
 */
char *leet(char *s)
{
	char n[] = "1133774400";
	char c[] = "lLeEtTaAoO";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
			if (s[i] == c[j])
				s[i] = n[j];
	}
	return (s);
}

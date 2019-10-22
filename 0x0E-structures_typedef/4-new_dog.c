#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - counts the length of a string
 *@s: Pointer to char
 *
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * *_strcpy - copies the string
 * @dest: buffer pointed to char
 * @src: string pointed to src
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * _strdup - copy of the string given as a parameter
 * @str: string
 * Return: a copy of the string
 */

char *_strdup(char *str)
{
	char *a;

	if (str == '\0')
	{
		return (NULL);
	}
	a = malloc((_strlen(str) * sizeof(char)) + 1);
	if (a == '\0')
	{
		return (NULL);
	}
	_strcpy(a, str);
	return (a);
}

/**
 * new_dog - function that creates a new structure
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: New dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	newdog->name = _strdup(name);

	if (newdog->name == 0)
	{
		free(newdog);
		return (0);
	}

	newdog->age = age;

	newdog->owner = _strdup(owner);

	if (newdog->owner == 0)
	{
		free(newdog->name);
		free(newdog);
		return (0);
	}
	return (newdog);
}

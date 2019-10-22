#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
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

	newdog->name = strdup(name);

	if (newdog->name == 0)
	{
		free(newdog);
		return (0);
	}

	newdog->age = age;

	newdog->owner = strdup(owner);

	if (newdog->owner == 0)
	{
		free(newdog->name);
		free(newdog);
		return (0);
	}
	return (newdog);
}

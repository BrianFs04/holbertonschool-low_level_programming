#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: structure
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name == NULL))
			printf("Name: %s\n", d->name);
		else
			printf("Name: nil");
		if (!(d->age == '\0'))
			printf("Age: %f\n", d->age);
		else
			printf("Age: nil");
		if (!(d->owner == NULL))
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: nil");
	}
	else if (d == NULL)
	{
		
	}
}

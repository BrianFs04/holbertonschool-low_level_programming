#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - frees a structure
 * @d: structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

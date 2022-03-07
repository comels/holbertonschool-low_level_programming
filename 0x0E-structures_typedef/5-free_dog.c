#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - fonction
 * @d: Dog
 * Return: rien
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

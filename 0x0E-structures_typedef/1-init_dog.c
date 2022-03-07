#include "dog.h"
/**
 * init_dog - fonction
 * @d: Dog
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner dog
 * Return: rien
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}

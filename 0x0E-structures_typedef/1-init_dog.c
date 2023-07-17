#include "dog.h"

/**
 * init_dog - initializes a dog
 * @d: the dog to initalize
 * @name: the dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

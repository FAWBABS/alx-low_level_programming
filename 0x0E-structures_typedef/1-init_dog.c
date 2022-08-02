#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Init dog
 * @d: array
 * @name: name
 * @owner: owner
 * @age: age
 *
 * Description: struct for a dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}

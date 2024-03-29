#include <stdlib.h>
#include "dog.h"

/**
 * _copy - Make acopy of passed in argument
 * @src: Data to make copy of
 * Return: pointer
 */

char *_copy(char *src)
{
	char *ptr;
	int i, len;

	if (src == NULL)
		return (NULL);

	for (len = 0; src[len] != '\0'; len++)
		;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		ptr[i] = src[i];

	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Create anew dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	snoopie = malloc(sizeof(dog_t));
	if (snoopie == NULL)
		return (NULL);

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(snoopie);
		return (NULL);
	}
	(*snoopie).name = new_name;

	(*snoopie).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*snoopie).name);
		free(snoopie);
		return (NULL);
	}
	(*snoopie).owner = new_owner;

	return (snoopie);
}

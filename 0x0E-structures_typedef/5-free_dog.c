#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory
 * @d: array
 * Description: free memory from struct
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

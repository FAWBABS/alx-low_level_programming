#include "main.h"

/**
 * _calloc - allocates memory fro an array
 * @nmeb: number of elements in the array
 * @size: bytes for each position in array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (mneb == 0 || size == 0)
		return (NULL);

	p = malloc(mneb * size);
	if (p == NULL)
		return (NULL);

	for (i =0; i < mneb * size; i++)
		p[i] = 0;

	return (p);

}

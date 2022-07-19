#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: number to be copied
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (dest == NULL)
		return (NULL);

	char *char_dest = (char *) dest;
	char *char_src = (char *) src;

	for (int i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

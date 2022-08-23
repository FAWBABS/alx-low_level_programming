#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * @s: memory pointed
 * @b: constant byte
 * @n: integer to be considered
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

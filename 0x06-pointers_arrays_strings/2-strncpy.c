#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination pointer array
 * @src - string to be copied
 * @n: value to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

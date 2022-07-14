#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to the destination array where content to be copied
 * @src: string to be copied
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = o, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

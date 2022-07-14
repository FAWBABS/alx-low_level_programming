#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to the destination array where content to be copied
 * @src: string to be copied
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

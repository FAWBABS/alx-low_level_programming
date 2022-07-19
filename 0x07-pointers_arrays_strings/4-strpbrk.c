#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: string
 * @accept: character
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}

		s++;
	}
	return (0);
}

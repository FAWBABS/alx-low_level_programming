#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence
 * @c: character
 * @s: string
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}

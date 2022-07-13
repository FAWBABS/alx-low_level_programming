#include "main.h"

/**
 * _strlen - length of a string
 * @s: pointer to an int that will be updated
 *
 * Return: void thats means answer is correct
 */

int -strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}

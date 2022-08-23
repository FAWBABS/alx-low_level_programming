#include "main.h"

/**
 * _strlen - length of a string
 * @s: pointer to an int that will be updated
 *
 * Return: void thats means answer is correct
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

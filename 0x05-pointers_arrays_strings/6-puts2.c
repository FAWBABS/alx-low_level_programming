#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: pointer to int that will be changed
 *
 * Return: void means answer correct
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i =0; i < j; i += 2)
	{
		_putchar (str[i]);
	}

	putchar ('\n');
}

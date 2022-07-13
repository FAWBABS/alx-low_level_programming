#include "maain.h"

/**
 * puts2 - prints every character of a string
 * @str: pointer to int that will be changed
 *
 * Return: void means answer correct
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}

	putchar ('\n');
}

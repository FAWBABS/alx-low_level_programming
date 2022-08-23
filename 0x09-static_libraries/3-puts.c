#include "main.h"

/**
 * _puts - prints a  string
 * @str: A pointer to an int that will be changed
 *
 * Return: void means answer cotrrect
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar (*str);
	}
	_putchar('\n');
}

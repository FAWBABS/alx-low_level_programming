#include "main.h"

/**
 * main - print alpabets in lowercase
 *
 * Return: Always 0(Success)
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);
}

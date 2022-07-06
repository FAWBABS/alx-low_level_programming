#include "main.h"

/**
 * print_alphabet_x10 - Print alpahbets in lowercase x10 times
 *
 * Return: Always 0(Success)
 */
void print_alphabet_x10(void)
{
	int ch;
	int count;

	count = 0;
	while (count < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch)
	}

	count++;
	_putchar('\n');
	}

}

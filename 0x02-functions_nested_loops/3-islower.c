#include "main.h"
/**
 * _islower(int c) - check if an alhpabet is in lowercase
 *
 * Return: Always 0
 */
int _islower(int c)
{
	char ch;

	if (ch >= 'a' && ch <= 'z')
	{
		_putchar(1);
	}
	else
	{
		_putchar(0);
	}

}

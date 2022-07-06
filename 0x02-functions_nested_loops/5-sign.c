#include "main.h"
/**
 * print_sign - determines sign of a number
 *
 * @n: number to be considered
 *
 * Return: Alwats 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

}

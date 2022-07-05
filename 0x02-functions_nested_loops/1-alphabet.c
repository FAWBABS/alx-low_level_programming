include "main.h"

/**
 * main - print alpabets in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
	return (0);
}

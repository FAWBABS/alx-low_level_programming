#include <stdio.h>

/**
 * main - print alphaets in reverse z-a
 *
 * Return: Always 0(Success);
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

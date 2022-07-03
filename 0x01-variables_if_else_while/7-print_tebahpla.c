#include <stdio.h>

/**
 * main - print alphaets in reverse z-a
 *
 * Return: Always 0(Success);
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

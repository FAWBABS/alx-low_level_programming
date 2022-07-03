#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: print lowercase letters except q and e
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q')
		{
			continue;
		}
		if (ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

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
		if (ch == 'q', 'e')
		{
			continue;
		}

		printf(ch);
	}
	printf('\n')

	return (0);
}

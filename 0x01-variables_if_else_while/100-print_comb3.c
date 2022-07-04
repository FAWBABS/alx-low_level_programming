#include <stdio.h>

/**
 * main - priint all combo of numbers in two digitd
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	int j;

	i = 48;
	j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			if ( j != i && j < i)
			{
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

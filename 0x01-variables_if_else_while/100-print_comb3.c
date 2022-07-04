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

	while (i < 58)
	{
		j = i + 1;
	}
	while (j < 58)
	{
		putchar(i);
		putchar(j)

		if (i < 56 || j < 57)
		{
			putchar(',');
			putchar(' ');
		}
		j++
	}
	i++;

	return (0);
}

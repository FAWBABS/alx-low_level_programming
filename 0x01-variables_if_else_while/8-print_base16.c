#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing numbers in base 16 in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char ch;
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

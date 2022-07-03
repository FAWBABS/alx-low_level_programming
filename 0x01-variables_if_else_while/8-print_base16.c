#include <stdio.h>

/**
 * main - printing numbers in base 16 in lowercase
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'e'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

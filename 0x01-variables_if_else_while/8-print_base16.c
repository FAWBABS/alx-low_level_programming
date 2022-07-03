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

	for (i = 0; i < 10; i++)
	{
		putchar("%i",i);
	}
	for (ch = 'a'; ch <= 'e'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

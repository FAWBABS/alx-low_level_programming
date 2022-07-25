#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 * @argc: argument count
 * @argv: argument
 * Return: void
 */

int main(int argc, char *argv)
{
	int i;

	int result = 1;

	for (i = 1; argc > 1; i++)
	{
		result = result * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", result);

	return (0);
}

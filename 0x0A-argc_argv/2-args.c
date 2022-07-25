#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments passed into it
 * @argc: argument count
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (argc > count)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}

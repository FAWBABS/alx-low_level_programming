#include <stdio.h>
#include "main.h"
/**
 * main - prints number of arguments passed into it
 * @argc: count arguments
 * @argv: arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

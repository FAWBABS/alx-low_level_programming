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
	printf(argc = "%d\n", argc);
	return (0);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print a name
 * @name: name
 * @f: pointer to name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}

#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

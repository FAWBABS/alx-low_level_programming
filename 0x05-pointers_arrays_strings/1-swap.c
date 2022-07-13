#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: A pointer to an int
 * @b: B pointer to an int
 * Return: void means answer is correct
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}

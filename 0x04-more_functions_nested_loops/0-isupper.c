#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: letter to be considered
 * Return: Always 0
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
}

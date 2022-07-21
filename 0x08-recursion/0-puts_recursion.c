#include "main.h"
/**
 * _puts_recursion - prints a new string in a new line
 * @s: string
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	for (; *s != '\0'; *s++)
	{
		_puts_recursion(*s);
	}
	_puts_recursion('\n');
}

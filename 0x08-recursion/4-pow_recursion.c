#include "main.h"
/**
 * _pow_recursion - returns value of x raised to poer of y
 * @x: value
 * @y: power
 * Return: void
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y != 0)
	{
		return (_pow_recursion((x, y - 1) * x));
	}
}

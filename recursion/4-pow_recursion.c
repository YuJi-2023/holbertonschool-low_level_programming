#include "main.h"
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: input int 1
 * @y: input int 2
 * Return: -1 if y < 0, otherwise return the power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		x *= _pow_recursion(x, y - 1);
	}
	return (x);
}

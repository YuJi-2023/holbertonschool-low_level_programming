#include "main.h"
/**
 * _sqrt_calculate - to help calculate the square root of a number
 * @n: input number
 * @root: the square root
 *
 * Return: square root
 */
int _sqrt_calculate(int root, int n)
{
	if (root % (n / root) == 0)
	{
		if (root * (n / root) == n)
		{
			return (root);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (_sqrt_calculate(root + 1, n));
	}
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input int
 * Return: square root, returns -1 if no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_calculate(1, n));
}

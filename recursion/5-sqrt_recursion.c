#include "main.h"
/**
 * _sqrt_calculate - to help calculate the square root of a number
 * @n: input number
 * @min: minimum value
 * @max: maximum value
 * Return: square root
 */
int _sqrt_calculate(int n, int min, int max)
{	int mid;

	mid = (min + max) / 2;

	if (min > max)
	{
		return (-1);
	}
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_calculate(n, mid + 1, max));
	}
	else
	{
		return (_sqrt_calculate(n, min, mid - 1));
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
	return (_sqrt_calculate(n, 1, n));
}

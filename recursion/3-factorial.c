#include "main.h"
/**
 *factorial - return the factorial of a given number
 * @n: input given number
 * Return: -1 if n < 0, otherwise return n!
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}

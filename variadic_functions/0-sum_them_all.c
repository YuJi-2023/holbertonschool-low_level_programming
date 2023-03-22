#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all parameters
 * @n: count number of input ints
 * Return: 0 if n is 0 otherwise sum value
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	int value;
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	i = 0;
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		value = va_arg(arg, int);
		sum = sum + value;
		i = i + 1;
	}
	va_end(arg);
	return (sum);
}

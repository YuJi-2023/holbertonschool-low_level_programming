#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: input parameter of a number
 * Return: 1 (n > 0) if number > 0 is true, return value is 1, positive;
 *         0 (n == 0) if number == 0 is true, return value is 0, zero;
 *        -1 (n < 0) if number < 0 is true, return value is -1, negative;
 */
int print_sign(int n)
{
	int num = n;

	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"
/**
 * print_sign: - print the sign of a number
 * @n: accept intiger input
 * Return: 1 (n > 0);
 *         0 (n == 0);
 *        -1 (n < 0);
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

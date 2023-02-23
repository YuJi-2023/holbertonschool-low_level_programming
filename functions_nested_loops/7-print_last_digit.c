#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: input parameter of a number
 * Return: return value of the last digit of the numberis
 */
int print_last_digit(int n)
{
	int y;

	if (n >= 0)
	{
		y = (n % 10);
		_putchar(y + '0');
	}
	else
	{
		n = (-1) * n;
		y = (n % 10);
		_putchar(y + '0');
	}
	return (y);
}

#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: input parameter of a number
 * Return: return value of the last digit of the numberis
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = (-1) * n;
	}
		last_digit = n % 10;
		_putchar(last_digit + '0');
		return (last_digit);
}

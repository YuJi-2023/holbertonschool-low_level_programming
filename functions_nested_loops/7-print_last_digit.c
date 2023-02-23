#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: input parameter of a number
 * Return: return value of the last digit of the numberis
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = (-1) * last_digit;
	}
		_putchar(last_digit + '0');
	return (last_digit);
}

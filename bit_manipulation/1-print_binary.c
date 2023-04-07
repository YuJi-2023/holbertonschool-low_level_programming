# include "main.h"
# include <stdlib.h>

/**
 * print_binary - a function that prints a number in binary
 * @n: input parameter of an int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar('0' + (n & 1));
}

# include "main.h"
# include <stdlib.h>

/**
 * print_binary - a function that prints a number in binary
 * @n: input parameter of an int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int bit;
	int binary;
	int least;
	int result[64];
	int i;

	bit = 1;
	binary = 0;
	i = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		least = n & 1;
		result[i] = least;
		binary = (binary << 1);
		binary = binary | least;
		n = (n >> 1);
		bit = (bit << 1);
		i = i + 1;
	}

	while (i > 0)
	{
		i = i - 1;
		_putchar('0' + result[i]);
	}
}

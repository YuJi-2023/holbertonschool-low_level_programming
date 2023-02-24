#include "main.h"

/**
 * print_line - print "_" of number n
 * @n:the number of "_" to be printed
 * Return: no value need
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int count = 1;

		while (n > 0 && count <= n)
		{
			_putchar('_');
			count = count + 1;
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9 except 2 and 4
 * Return: no value need
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if ((i != 2) && (i != 4))
		{
		_putchar(i + '0');
		}
		i = i + 1;
	}
	_putchar('\n');
}

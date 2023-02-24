#include "main.h"

/**
 * print_diagonal - print '\' of n times to make a diagonal line
 * @n:the number of '\' to be printed
 * int h: to count the change horizontally
 * int s: to count the space needed before '\' in each line
 * Return: no value need
 */
void print_diagonal(int n)
{
	int h = 0;
	int s = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (h < n)
		{
			while (s < h)
			{
				_putchar(' ');
				s = s + 1;
			}
			_putchar('\\');
			_putchar('\n');
			h = h + 1;
			s = 0;
		}
	}
}

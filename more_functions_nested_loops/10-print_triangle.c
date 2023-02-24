#include "main.h"

/**
 * print_triangle - print '#' into a triangle shape
 * @size:the size (line number) of '#' to be printed
 * int v: to count the vertical loop
 * int s: to count the space loop needed before '#' in each line
 * int m: to count the "#" loop in each line
 * Return: no value need
 */
void print_triangle(int size)
{
	int v = 1;
	int s = 0;
	int m = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (v <= size)
		{
			while (s < size - v)
			{
				_putchar(' ');
				s = s + 1;
			}
			while (m < v)
			{
				_putchar('#');
				m = m + 1;
			}
			_putchar('\n');
			v = v + 1;
			s = 0;
			m = 0;
		}
	}
}

#include "main.h"

/**
 * more_numbers - print numbers from 0-14 for 10
 * Return: no value need
 */
void more_numbers(void)
{
	int i = 0;
	int p = 0;

	while (p < 10)
	{
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i = i + 1;
		}
		_putchar('\n');
		p = p + 1;
		i = 0;
	}
}

#include "main.h"
/**
 * times_table - print the 9 times table, from 0*0 to 9*9
 * Return: no return
 */
void times_table(void)
{
	int a = 0;
	int b = 0;

	while (a <= 9)
	{
		while (b <= 9)
		{
			int result = a * b;
			int d1 = result / 10;
			int d2 = result % 10;

			_putchar(d1 + '0');
			_putchar(d2 + '0');
			_putchar(',');
			_putchar(' ');
			b = b + 1;
		}
			_putchar('\n');
			a = a + 1;
			b = 0;
	}
}

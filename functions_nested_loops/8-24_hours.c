#include "main.h"
/**
 * jack_bauer - print every minute of the day from 00:00 to 23:59
 * Return: no return
 */
void jack_bauer(void)
{
	int hour = 0;
	int min = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			int d1 = hour / 10;
			int d2 = hour % 10;
			int d3 = min / 10;
			int d4 = min % 10;

			_putchar(d1 + '0');
			_putchar(d2 + '0');
			_putchar(':');
			_putchar(d3 + '0');
			_putchar(d4 + '0');
			_putchar('\n');
			min = min + 1;
		}
			hour = hour + 1;
			min = 0;
	}
}

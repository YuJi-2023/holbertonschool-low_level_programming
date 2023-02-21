#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		j = i + 1;

		while (j <= '9')
		{
			if (i < j)
			{
			putchar(i);
			putchar(j);
				if (i < '8')
				{
				putchar(',');
				putchar(' ');
				}
			}
			j = j + 1;
		}
	i = i + 1;
	}
	putchar('\n');
	return (0);
}


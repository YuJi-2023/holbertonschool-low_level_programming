#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int first = 0;

	while (i <= '9')
	{
		j = i + 1;

		while (j <= '9')
		{
			k = j + 1;

			while (k <= '9')
			{
				if (i < j && j < k)
				{
					if (first > 0)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(i);
					putchar(j);
					putchar(k);
				}
				k = k + 1;
				first = 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}


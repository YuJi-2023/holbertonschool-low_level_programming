#include <stdio.h>

/**
 * main - Entry point to print numbers 1 to 100
 * n%3=0 - print Fizz;
 * n%5=0 - print Buzz;
 * n%3=0 && n%5=0 - print fizzbuzz
 * Return: the value of int n
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		int i = n % 3;
		int j = n % 5;

		if (i == 0)
		{
			printf("%s", "Fizz");
		}
		if (j == 0)
		{
			printf("%s", "Buzz");
		}
		if (i != 0 && j != 0)
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
		n = n + 1;
	}
	putchar('\n');
	return (0);
}

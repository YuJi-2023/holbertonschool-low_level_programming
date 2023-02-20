#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	int position = 0;

	while (position < 26)
	{
	putchar(lowercase[position]);
	position++;
	}
	putchar('\n');
	return (0);
}

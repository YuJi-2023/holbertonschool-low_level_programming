#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int position = 0;

	while (position < 52)
	{
	putchar (alphabets[position]);
	position++;
	}
	putchar ('\n');

	return (0);
}

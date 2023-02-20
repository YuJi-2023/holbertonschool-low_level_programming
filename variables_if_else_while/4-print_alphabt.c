#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
	char skipeq[] = "abcdfghijklmnoprstuvwxyz";
	int position = 0;

	while (position < 24)
	{
	putchar(skipeq[position]);
	position++;
	}
	putchar('\n');

	return (0);
}



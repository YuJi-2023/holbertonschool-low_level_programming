# include "main.h"
# include <stdio.h>
/**
 * main - Write a program that prints its name, followed by a new line
 * @argc: count of total command line arguments
 * @argv: the array of character string of each command line argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		argv[i] = argv[i + 1];
		i = i + 1;
	}
	printf("%d\n", i - 1);
	return (0);
}

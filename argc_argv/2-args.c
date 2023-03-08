# include "main.h"
# include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives
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
		printf("%s\n", argv[i]);
		i = i + 1;
	}
	return (0);
}

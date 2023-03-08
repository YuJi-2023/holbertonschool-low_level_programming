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
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

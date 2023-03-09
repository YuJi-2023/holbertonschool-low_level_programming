# include "main.h"
# include <stdio.h>
/**
 * main - Write a program that prints the number of arguments passed into
 * @argc: count of total command line arguments
 * @argv: the array of character string of each command line argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

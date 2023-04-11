#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file
 * and prints it  to the stdout
 * @filename: input pointer to the file to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd;
	ssize_t wr;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr < 0)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (wr);
}

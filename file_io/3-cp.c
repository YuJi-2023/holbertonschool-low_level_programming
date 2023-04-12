#include "main.h"

/**
 * xopen - a function that opens a file
 * and depends on which file, it opens with different modes
 * @file: pointer to file to be open
 * @which_file: an input reference to differ the files
 * where 1 refers to file_from and else refers to file_to
 * Return: file descriptor to the opened file
 */
int xopen(const char *file, int which_file)
{
	int result;

	if (which_file == 1)
	{
		result = open(file, O_RDONLY);
		if (file == NULL || result < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
			exit(98);
		}
	}
	else
	{
		result = open(file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
			exit(99);
		}
	}
	return (result);
}
/**
 * xread - a function that reads a file
 * @fd: input file descriptor
 * @buf: buffer to store what has been read
 * @count: bytes to be read
 * @filename: pointer to file name that to be printed in the error message
 * Return: bytes read on success or -1 on errors while
 * 0 indicates the end of a file
 */
ssize_t xread(int fd, char *buf, size_t count, char *filename)
{
	ssize_t read_result;

	read_result = read(fd, buf, count);
	if (read_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (read_result);
}
/**
 * xwrite - a function that writes to a file
 * @fd: input file descriptor
 * @buf: buffer to write from
 * @count: bytes to be written
 * @filename: pointer to file name that to be printed in the error message
 * Return: bytes written on success or -1 on errors
 */
ssize_t xwrite(int fd, char *buf, size_t count, char *filename)
{
	int write_result;

	write_result = write(fd, buf, count);
	if (write_result < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (write_result);
}
/**
 * xclose - close a file descriptor
 * @fd: file descriptor to be closed
 * Return: -1 on failure
 */
int xclose(int fd)
{
	int result;

	result = close(fd);
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (result);
}

/**
 * main - entry point for cp function which copies file_from to file_to
 * @argc: count of total arguments
 * @argv: the array of char string refers to filenames
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char buf[1024];
	int fd_from;
	int fd_to;
	int read_bytes;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = xopen(argv[1], 1);
	fd_to = xopen(argv[2], 2);

	read_bytes = xread(fd_from, buf, 1024, argv[1]);
	while (read_bytes != 0)
	{
		xwrite(fd_to, buf, read_bytes, argv[2]);
		read_bytes = xread(fd_from, buf, 1024, argv[1]);
	}
	xclose(fd_from);
	xclose(fd_to);
	return (0);
}

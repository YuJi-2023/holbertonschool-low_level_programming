#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - a function that creates a file
 * @filename: input pointer to the filename
 * @text_content: input parameter of the contents to be written into the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		wr = write(fd, "", 0);
	}
	else
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len = len + 1;
		}
		wr = write(fd, text_content, len);
	}
	if (wr < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

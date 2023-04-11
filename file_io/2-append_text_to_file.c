#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: input pointer to the file
 * @text_content: input parameter of the contents to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;
	int len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len = len + 1;
		}
		wr = write(fd, text_content, len);
	}
	if (wr != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

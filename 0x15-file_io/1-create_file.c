#include "holberton.h"
#define SUCCESS 1
#define FAILURE (-1)
/**
 * create_file - creates a file and sets the contents
 * @filename: name for the new file
 * @text_content: content for the new file
 *
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int size;
	int fd;

	fd = open(filename, O_TRUNC | O_WRONLY);
	if (fd == -1)
	{
		close(fd);
		fd = open(filename, O_CREAT | O_RDWR, 00600);
		if (fd == -1)
			return (FAILURE);
	}

	for (size = 0; text_content[size] != '\0'; size++)
		;

	if (write(fd, text_content, size) == -1)
	{
		close(fd);
		return (FAILURE);
	}

	close(fd);

	return (SUCCESS);
}

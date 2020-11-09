#include "holberton.h"
#define SUCCESS 1
#define FAILURE (-1)


/**
 * append_text_to_file - adds text to a file
 * @filename: name of the file to edit
 * @text_content: text to append;
 *
 * Return: 1 if success, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int cnt;

	if (filename == NULL)
		return (FAILURE);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == FAILURE)
		return (FAILURE);

	if (text_content != NULL)
	{
		for (cnt = 0; text_content[cnt] != '\0'; cnt++)
			;
		if (write(fd, text_content, cnt) == FAILURE)
			return (FAILURE);
	}

	close(fd);
	return (SUCCESS);
}

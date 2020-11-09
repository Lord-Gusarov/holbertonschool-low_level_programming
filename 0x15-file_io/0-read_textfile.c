#include "holberton.h"
#define FAIL 0
#define CLOSE free(buff)

/**
 * read_textfile - reads the content of a file and prints it to
 * POSIX standart output
 * @filename: file nin the current pwd
 * @letters: amount of letters it should read and print
 *
 * Return: the actual number of letters it could print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int reading;
	char *buff = malloc(sizeof(char) * (letters + 1));
	ssize_t cnt_write = 0;

	if (filename == NULL || buff == NULL)
		return (FAIL);

	reading  = open(filename, O_RDONLY);
	if (reading == -1)
	{
		CLOSE;
		return (FAIL);
	}

	if (read(reading, buff, letters) == -1)
	{
		CLOSE;
		return (FAIL);
	}

	cnt_write = write(STDOUT_FILENO, buff, letters);
	if (cnt_write == -1)
	{
		CLOSE;
		return (FAIL);
	}


	close(reading);
	CLOSE;

	return (cnt_write);
}

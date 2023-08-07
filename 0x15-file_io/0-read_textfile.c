#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to a standard output
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed. 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buf[1024];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, buf, sizeof(buf));
	if (bytes == -1) 
	{
		close(fd);
		return (0);
	}

	bytes = write(STDOUT_FILENO, buf, bytes);
	if (bytes == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes);
}


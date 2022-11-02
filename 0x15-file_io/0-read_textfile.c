#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 if file can not be opened or read
 * if filename is NULL return 0
 * if write fails or does not write the
 * expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int s, t;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	s = read(fd, buf, letters);
	if (s < 0)
	{
		free(buf);
		return (0);
	}
	buf[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, buf, s);
	if (t < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (t);
}

#include "main.h"
/**
 * read_textfile - Reads the textfile printd to stdout
 * @filename: text file being read
 * @letters: numbers to be read
 * Return: w for the actual num of bytes read and printed
 * 0 when func fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

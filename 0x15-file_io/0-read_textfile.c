#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to STDOUT
 * @filename: file to be read
 * @letters: num of letters that are to be read
 * Return: w- num of bytes read printed, 0 if failed or Filename is NULL
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

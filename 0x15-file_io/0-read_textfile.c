#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of text file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	c = malloc(letters);
	if (c == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	r = read(fd, c, letters);
	if (r < 0)
		return (0);
	w = write(1, c, letters);
	if (w < 0)
		return (0);
	close(fd);
	free(c);
	return (r);
}

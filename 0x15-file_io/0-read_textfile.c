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
	void *buf;
	ssize_t r, w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	w = write(1, buf, r);
	if (w == -1)
	{
		free(buf);
		return (r);
	}
	free(buf);
	return (r);
}

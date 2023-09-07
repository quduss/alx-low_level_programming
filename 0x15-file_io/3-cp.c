#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that copies the content of a file to another file
 * @ac: number of arguments given to program
 * @av: pointer to first string argument provided
 * Return: 0 if success
 */

int main(int ac, char **av)
{
	int fd_to, fd_from, r, w;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (0);
	if (ac != 3)
	{
		exit(97);
		dprintf(2, "Usage: cp file_from file_to\n");
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to < 0)
	{
		exit(99);
		dprintf(2, "Error: Can't write to %s\n", av[2]);
	}
	while (1)
	{
		r = read(fd_from, buf, 1024);
		if (r < 0)
		{
			exit(98);
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
		}
		w = write(fd_to, buf, r);
		if (w < 0)
		{
			exit(99);
			dprintf(2, "Error: Can't write to %s\n", av[2]);
		}
		if (r < 1024)
			break;
	}
	if (close(fd_from) < 0)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %i\n", fd_from);
	}
	if (close(fd_to) < 0)
	{
		exit(100);
		dprintf(2, "Error: Can't close fd %i\n", fd_to);
	}
	free(buf);
	return (0);
}

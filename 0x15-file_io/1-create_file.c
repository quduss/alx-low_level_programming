#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content - text to write into the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	size_t cnt;

	if (filename == NULL)
		return (-1);
	cnt = strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	w = write(fd, text_content, cnt);
	if (w < 0)
		return (-1);
	return (1);
}

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "holberton.h"
/**
  * read_textfile - reads a text file and prints standard output.
  *@filename: Pointer name of th file
  *@letters: number of letters it should read and print
  *Return: the actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (len == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	len = read(fd, buffer, letters);
	if (len == -1)
		return (0);
	len = write(STDOUT_FILENO, buffer, len);
	close(fd);
	free(buffer);
	return (len);
}

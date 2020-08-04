#include "holberton.h"

/**
  *read_textfile - reads a text file and prints standard output.
  *@filename: Pointer name of th file
  *@letters: number of letters it should read and print
  *Return: the actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;
	ssize_t len = 0;
	char *buf;

	if (!filename)
	{
		return (0);
	}
	text = open(filename, O_RDONLY);
	if (len == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		return (0);
	}
	len = read(text, buf, letters);
	if (len == -1)
	{
		return (0);
	}
	len = write(STDOUT_FILENO, buf, len);
	close(text);
	free(buf);
	return (len);
}

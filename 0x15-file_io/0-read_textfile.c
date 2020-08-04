#include "holberton.h"

/**
  *
  *
  *
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int text;
	char *buf;
	int lenStr;

	if (filename == NULL)
		return (0);
	text = open(filename, O_RDONLY);
	if (text == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	lenStr = read(text, buf, letters);
	if (write(STDOUT_FILENO, buf, lenStr) != lenStr)
		return (0);
	close(text);
	free(buf);
	return (lenStr);
}
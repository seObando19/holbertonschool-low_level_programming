#include "holberton.h"

/**
  *read_textfile - reads a text file and prints
  *it to the POSIX standard output.
  *@filename:Pointer name of th file
  *@letters: number of letters it should read and print
  *Return: the actual number of letters
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

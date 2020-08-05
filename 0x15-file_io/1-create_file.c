#include "holberton.h"
/**
  *_strlen - lenght of the string
  *@val: string
  *Return: lenght of the string
*/
int _strlen(char *val)
{
	int i = 0;

	while (val[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
  *create_file - appends text at the end of a file.
  *@filename: name of the file to find
  *@text_content: content of the file
  *Return: 1 if the success or faile -1
*/
int create_file(const char *filename, char *text_content)
{
	int file, len;
	char *buf;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}

	len = _strlen(text_content);
	buf = malloc(sizeof(char) * len);
	if (!buf)
		return (-1);

	write(file, text_content, len);
	close(file);
	free(buf);
	return (1);
}

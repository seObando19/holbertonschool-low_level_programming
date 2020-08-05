#include "holberton.h"
/**
  *append_text_to_file - appends text at the end of a file.
  *@filename: name of the file to find
  *@text_content: content of the file
  *Return: 1 if the success or faile -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i = 0, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		text_content = "";
	}
	file = open(filename, O_RDWR  | O_APPEND);
	if (file == -1)
	{
		close(file);
		return (-1);
	}
	while (text_content[i])
		i++;
	len = write(file, text_content, i);
	close(file);
	if (!len)
		return (-1);
	return (1);
}

#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
/**
  *header for open
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
  *header for write, read and close
*/
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* _HOLBERTON_H_ */
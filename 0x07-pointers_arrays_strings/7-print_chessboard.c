#include "holberton.h"

/**
  *print_chessboard - prints the chessboard.
  *@a: pointer
  *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, m;

	for (i = 0; i < 8; i++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[i][m]);
		_putchar('\n');
	}
}

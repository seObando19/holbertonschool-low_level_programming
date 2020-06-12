#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *
  *
  *
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		} else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return(0);
}

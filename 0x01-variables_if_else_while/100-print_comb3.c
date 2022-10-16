#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Program to print 0 to 9
 */

/**
 * main - Entry point of the program
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int j = 0;

	while (j <= 89)
	{

		if (j <= 9)
		{
			putchar('0');
		}

		putchar(j + '0');

		if ( j <= 88)
		{
			putchar(',');
			putchar(' ');
		}
		j++;
	}
	putchar('\n');
	return (0);
}

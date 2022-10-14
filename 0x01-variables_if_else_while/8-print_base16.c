#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * You can only use the putchar
 * function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Skip the print of  q and e
 */

/**
 * main - Entry point of the program
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	char ch = 'a';
	int i = 0;

	for (i; i < 10; i++)
	{
		putchar(i + '0');
	}

	while (ch = < 'z')
	{
		putchar(ch);

		ch++;
	}
	putchar('\n');
	return (0);
}

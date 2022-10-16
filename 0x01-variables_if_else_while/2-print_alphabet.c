#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * You can only use the putchar
 * function (every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 */

/**
 * main - Entry point of the program
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int j = 0;
	char s[] = "abcdefghijklmnopqrstuvwxyz";

	while (s[j])
	{
		putchar(s[j]);
		j++;
	}
	putchar('\n');
	return (0);
}

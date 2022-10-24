/*
 *Write a program that
 * that prints _putchar
 *followed by a new line
 */
#include "main.h"



/**
 * main - Entry point for
 * program
 * Return: 0 Always (success)
 */

int main(void)
{
	char s[] = "_putchar";

	int i = 0;/* counter variable to hold index of string*/

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}

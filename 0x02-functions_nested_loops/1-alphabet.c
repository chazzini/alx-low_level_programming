/*
 *Write a function  that
 * that prints  the alphabet
 * in lowercase with _putchar
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


	int i = 97;/* counter variable to hold index of string*/

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
	return (0);
}

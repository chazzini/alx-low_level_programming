/*
 *Write a function  that
 * that prints  the alphabet
 * in lowercase with _putchar
 *followed by a new line
 */
#include "main.h"

void print_alphabet(void);

/**
 * main - Entry point for
 * program
 * Return: 0 Always (success)
 */

int main(void)
{
	print_alphabet();
	return (0);

}

void print_alphabet(void)
{
	int i = 97;/* counter variable to hold index of string*/

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');

}


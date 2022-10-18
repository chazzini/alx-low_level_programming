/*
 *Write a function  that
 * that prints  the alphabet
 * in lowercase with _putchar 10 times
 * followed by a new line
 */
#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_alphabet_x10 - print all lower
 * case alphabet 10 times
 * program
 * Return: void Always (success)
 */
void print_alphabet_x10(void)
{
	int i = 0;/* counter variable to hold index of string*/

	while (i <= 9)
	{
		int j = 97;/* counter variable to hold index of string*/

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}


}


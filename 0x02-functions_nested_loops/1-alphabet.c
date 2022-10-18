/*
 *Write a function  that
 * that prints  the alphabet
 * in lowercase with _putchar
 *followed by a new line
 */
#ifndef HEADER_FILE
#define HEADER_FILE
#include "1-main.h"
#include "main.h"
#endif

/**
 * print_alphabet - print all lower
 * case alphabet
 * program
 * Return: void Always (success)
 */
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


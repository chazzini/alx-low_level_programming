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
 * print_sign - check if int is
 * greater that 1 print + and return 1
 * or 0 print 0 and return 0
 * else return -1 and print -
 * @n: n int the char to check
 *
 * Return: 1  for true or 0 for false Always (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	_putchar(0 + '0');
	return (0);
}


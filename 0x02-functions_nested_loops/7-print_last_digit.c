#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * print_last_digit - return the last digit of a number
 * @n: n int the char to check
 *
 * Return: zero always
 */
int print_last_digit(int n)
{
	int _absn = n % 10;

	if (_absn < 0)
	{
		_putchar(_absn * -1 + '0');
		return (_absn * -1);
	}

	_putchar(_absn + '0');
	return (_absn);
}


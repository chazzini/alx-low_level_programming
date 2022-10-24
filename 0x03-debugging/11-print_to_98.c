#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include "main.h"
#endif

/**
 * print_to_98 - return the sum of two number
 * @n: n int
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	} else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;

		}
	}

}


#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include "main.h"
#endif

/**
 * times_table - print times table to 9
 *
 * Return: void
 */
void times_table(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 0;

		while (i < 10)
		{
			int k;

			k = j * i;
			if (i == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}


			i++;
		}

		_putchar('\n');
		j++;
	}
}

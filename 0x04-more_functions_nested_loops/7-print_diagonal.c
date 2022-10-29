#include "main.h"

/**
 * print_diagonal - print line
 * @s: count for line
 * Return: void
 */
void print_diagonal(int s)
{
	int i, j;


	for (i = 0; i <= s; i++)
	{
		j = 0;

		while (j < i)
		{
			j++;
			_putchar(' ');
		}
		_putchar(92);
		if (i < (s -1))
			_putchar('\n');

	}
	_putchar('\n');

}

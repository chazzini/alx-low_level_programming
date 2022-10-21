#include "main.h"

/**
 * print_diagonal - print line
 * @s: count for line
 * Return: void
 */
void print_diagonal(int s)
{
	int i, j;


	for (i = 1; i <= s; i++)
	{
		if (s == 0)
			break;
		j = i;

		while (j--)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');

	}

}

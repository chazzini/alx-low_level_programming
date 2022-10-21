#include "main.h"

/**
 * more_numbers - print 0 to  9
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k = 0;

	while (k < 10)
	{
		for (i = 0; i <= 1; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				if (i == 0 && j == 0)
					continue;
				if (i == 1 && j == 5)
					break;

				if (i == 1)
					_putchar(i + '0');
				_putchar(j + '0');
			}
		}
		_putchar('\n');
		k++;
	}
}

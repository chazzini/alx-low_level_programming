#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Program to print 0 to 9
 */

/**
 * main - Entry point of the program
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int j = 0; /*char for ten value*/

	while (j <= 8)
	{
		int k = j + 1;

		while (k < 9)
		{
			int i =  k + 1; /*char for unit value*/

			while (i <= 9)
			{
				if (i % 10 == 0)
				{
					i++;
					continue;
				}

				putchar(j + '0'); /*print the ten to output*/
				putchar(k + '0');
				putchar(i + '0'); /*print the unit to output*/

				if (!(j == 7 && k == 8 && i == 9))
				{
					putchar(',');
					putchar(' ');
				}
				i++;

			}
			k++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}

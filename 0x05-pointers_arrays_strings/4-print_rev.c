#include "main.h"

/**
 * print_rev - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}



	for (i = (count - 1); i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

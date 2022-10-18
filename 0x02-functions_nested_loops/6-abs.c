#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 * _abs - return the absolute of a nmber
 * @n: n int the char to check
 *
 * Return: 1  for true or 0 for false Always (success)
 */
int _abs(int n)
{
	if (n < 0)
	{

		return (n * -1);
	}

	return (n);
}


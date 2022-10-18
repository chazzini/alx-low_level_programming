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
 * _islower - check if char is
 * lowercase if true return 1
 * else return 0
 * @c: c char the char to check
 *
 * Return: 1 or 0 Always (success)
 */
int _islower(char c)
{
	int z = (int) c;

	if (z >= 97 && z <= 122)
	{
		return (1);
	}
	return (0);
}


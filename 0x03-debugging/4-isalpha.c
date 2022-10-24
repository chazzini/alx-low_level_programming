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
 * _isalpha - check if char is
 * an alphabet if true return 1
 * else return 0
 * @c: c int the char to check
 *
 * Return: 1  for true or 0 for false Always (success)
 */
int _isalpha(int c)
{
	int z = (int) c;

	if ((z >= 97 && z <= 122) || (z >= 65 && z <= 90))
	{
		return (1);
	}
	return (0);
}


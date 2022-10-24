#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * The variable n will store a different value
 * every time you will run this program
 * You don’t have to understand what rand,
 * srand, RAND_MAX do. Please do not touch this code
 * The output of the program should be:
 * The number, followed by
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * followed by a new line
 */

/**
 * main - Entry point of the program
 *
 *Return: 0 Always (Success)
 */
void positive_or_negative(int t)
{
	int n = t;


	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

}

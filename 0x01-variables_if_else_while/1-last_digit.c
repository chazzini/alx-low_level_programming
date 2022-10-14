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
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char s[sizeof(n)];
	sprintf(s, "%d", n);

	int strsize = sizeof s;

	char lastvalue = s[strsize +1];

	if ((int)lastvalue > 5)
	{
		printf("Last digit of %d is %c ad=nd is greater than 5\n", n,lastvalue);
	}
	else if ((int)lastvalue == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else if((int)lastvalue < 6 && (int)lastvalue !=0 )
	{
		printf("Last digit of %d is %c and is less than 6 and not 0\n", n, lastvalue);
	}
	return (0);
}

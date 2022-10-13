#include <stdio.h>

/**
 * main - Entry point
 * Printing out the size of various intrinsic type to
 * standard output
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c;
	long int li;
	long long int  lli;
	float fd;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(fd));

	return (0);
}

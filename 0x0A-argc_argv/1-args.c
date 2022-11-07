#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc : argument count
 * @argv : argument value
 * Return: 0 success
 */
int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

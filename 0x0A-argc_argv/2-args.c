#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 *
 * @argc : argument count
 * @argv : argument value
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i <= argc - 1)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

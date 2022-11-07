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
	int i = 1, mul = 1, j = 0;


	if (argc > 1)
	{

		while (i <= argc - 1)
		{
			mul *= atoi(argv[i]);
			i++;

		}
	}

	if (argc < 3)
		printf("Error\n");
		j = 1;
	else
		printf("%d\n", mul);
	return (j);
}

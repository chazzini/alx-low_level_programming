#include <ctype.h>
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
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of two numbers
 * @argc: number ofcommand line arguments
 * @argv: pointer to an array of command line argumnts
 * Return: Always 0 (Success), No-zero-ail
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

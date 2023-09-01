#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 *
 * @argc: count of the argument.
 *
 * @argv: an array of pointer to string.
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc > 1)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

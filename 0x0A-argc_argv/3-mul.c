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
	int x = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	return (0);
}

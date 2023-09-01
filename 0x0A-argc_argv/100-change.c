#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: count for the arguments.
 *
 * @argv: ann array of pointer to string.
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}


	sum = atoi(argv[1]);

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}
	while (sum / 25)
	{
		sum -= 25;
		coins++;
	}
	while (sum / 10)
	{
		sum -= 10;
		coins++;
	}
	while (sum / 5)
	{
		sum -= 5;
		coins++;
	}
	while (sum / 2)
	{
		sum -= 2;
		coins++;
	}
	coins += sum;
	printf("%d\n", coins);
	return (0);
}

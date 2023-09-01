#include <stdio.h>
/**
 * main - Entry point.
 *
 * @argc: count of the arguments.
 *
 * @argv: an array of pointers to the strings.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}

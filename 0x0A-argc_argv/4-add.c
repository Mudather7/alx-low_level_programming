#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * @argc: count for the arguments.
 *
 * @argv: an array of pointer to string.
 *
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int n;
			char *str;

			str = argv[i];

			for (n = 0; str[n] != '\0'; n++)
			{
				if (str[n] < 48 || str[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * &n: input
 *
 * return: 0
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = 0; count > 98; count--)
			printf("%d, ", count);
	}
	else
	{
		for (count = 0; count < 98; count++)
			printf("%d, ", count);
	}
	printf("98\n");
}


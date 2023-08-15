#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @i: input
 *
 * return: 0
 */
void print_to_98(int i)
{

	if (i >= 98)
	{
		while (i > 98)
		{
			printf("%d, ", i--);
			printf("%d\n", i);
		}
	}
	else
	{
		while (i < 98)
		{
			printf("%d, ", i++);
			printf("%d\n", i);
		}
	}
}

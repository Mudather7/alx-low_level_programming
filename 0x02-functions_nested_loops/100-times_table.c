#include <stdio.h>
#include "main.h"
/**
 *print_times_table - rints the n times table, starting with 0.
 *
 *@n: integer.
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (k = 0; k <= n; k++)
		{
			_putchar('0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				i = k * j;

				if (i <= 9)
					_putchar(' ');
				if (i <= 99)
					_putchar(' ');
				if (i >= 100)
				{
					_putchar((i / 100) + '0');
					_putchar((i % 10) % 10 + '0');
				}
				else if (i <= 99 && i >= 10)
				{
					_putchar((i / 10) + '0');
				}
				_putchar((i % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

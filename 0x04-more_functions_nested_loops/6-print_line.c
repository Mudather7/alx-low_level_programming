#include "main.h"
/**
 * print_line -  function that draws a straight line in the terminal
 *
 * @n: the number.
 *
 * Return: 0.
 */
void print_line(int n)
{
	int i;

	while (n <= 0)
	{
		_putchar('\n');


		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

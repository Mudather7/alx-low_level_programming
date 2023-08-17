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
	while ( n > 0)
	{
		_putchar('_');
		n++;

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

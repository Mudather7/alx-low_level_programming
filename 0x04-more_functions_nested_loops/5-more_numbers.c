#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			n = j;

			if (j > 9)
			{
				_putchar(j / 10 + '0');
				n = j % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');

	}

}

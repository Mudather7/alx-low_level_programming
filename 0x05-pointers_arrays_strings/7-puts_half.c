#include "main.h"
/**
 * puts_half - function that prints half of a string.
 *
 * @str: the string.
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i, l, n;

	for (l = 0; str[l] != '\0'; l++)
		;
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
	}
	else
		for (n = (l - 1) / 2; n < l - 1; n++)
			_putchar(str[n + 1]);
	_putchar('\n');
}

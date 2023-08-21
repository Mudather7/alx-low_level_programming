#include "main.h"
/**
 * puts2 - function that prints every other character of a string.
 *
 * @str: the string.
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i, l;

	for (l = 0; str[l] != '\0'; l++)
		;
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)

		_putchar(str[i]);
	}
}

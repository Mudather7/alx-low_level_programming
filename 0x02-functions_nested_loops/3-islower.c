#include <stdio.h>
#include "main.h"
 /**
 * _islower -  checks for lowercase character.
 *
 * Return: 1 if c is lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	_putchar('\n');
	return (0);
}


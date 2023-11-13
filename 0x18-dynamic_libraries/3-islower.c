#include <stdio.h>
#include "main.h"
/**
 * _islower - check if the character is in lowercase.
 *
 *@c: the character to be checked.
 *
 *Return: 1 if the character is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}



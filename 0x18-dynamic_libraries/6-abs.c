#include "main.h"
/**
 *_abs - prints the absolute value of an integer.
 *
 *@n: the integer.
 *
 *Return: 0.
 */

int _abs(int n)
{
	if (n < 0)
		n = -1 * n;
	return (n);
}

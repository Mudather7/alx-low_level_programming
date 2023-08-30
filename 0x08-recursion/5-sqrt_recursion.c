#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *
 * @n: an integer.
 *
 * Return: the square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (s(n, 1));
}

/**
 * s - funtion that find the natural square root.
 *
 * @i: same number as n.
 *
 * @j: the interator.
 *
 * Return: the square root
 */
int s(int i, int j)
{
	if (j * j == i)
		return (j);

	else if (j * j > i)
		return (-1);

	return (s(i, j + 1));
}

#include "main.h"
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
	return (actual_sqrt(n, 1));
}

/**
 * actual_sqrt - funtion that find the natural square root.
 *
 * @i: same number as n.
 *
 * @j: the interator.
 *
 * Return: the square root
 */
int actual_sqrt(int i, int j)
{
	if (j * j == i)
		return (j);

	else if (j * j > i)
		return (-1);

	return (actual_sqrt(i, j + 1));
}

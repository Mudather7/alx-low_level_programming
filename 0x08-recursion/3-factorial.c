#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: an integer.
 *
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}

#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number otherwise return 0.
 *
 * @n: an integer
 *
 * Return: 1 if the integer is a prime number
 * 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, 2));
}
/**
 * prime_num - function that checks if number is prime.
 *
 * @a: same number as n.
 *
 * @b: interator.
 *
 * Return: 1 if the integer is a prime number
 * 0 otherwise.
 */
int prime_num(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_num(a, b + 1));
}

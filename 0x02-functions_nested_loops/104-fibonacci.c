#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long i, n = 1, m = 2, mx = 1000000000, n1, n2, m1, m2;

	printf("%lu", n);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", m);
		m += n;
		n = m - n;
	}

	n1 = (n / 1);
	n2 = (n % 1);
	m1 = (m / 1);
	m2 = (m % 1);

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", m1 + (m2 / 1));
		printf("%lu", m2 % 1);
		m1 = m1 + n1;
		n1 = m1 - n1;
		m2 = m2 + n2;
		n2 = m2 - n2;
	}
	printf("\n");
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long i, n = 1, m = 2, l = 1000000000, n1, n2, m1, m2;

	printf("%lu", n);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", m);
		m += n;
		n = m - n;
	}

	n1 = (n / l);
	n2 = (n % l);
	m1 = (m / l);
	m2 = (m % l);

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", m1 + (m2 / l));
		printf("%lu", m2 % l);
		m1 = m1 + n1;
		n1 = m1 - n1;
		m2 = m2 + n2;
		n2 = m2 - n2;
	}
	printf("\n");
	return (0);
}

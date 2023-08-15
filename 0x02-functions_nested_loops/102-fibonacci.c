#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long m1 = 0, m2 = 1, m3;

	for (count = 0; count < 50 ; count++)
	{
		m3 = m1 + m2;
		printf("%lu", m3);
		m1 = m2;
		m2 = m3;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}

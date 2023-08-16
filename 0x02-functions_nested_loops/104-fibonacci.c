#include <stdio.h>
/**
 * main - Entry point.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int count, initial;
	unsigned long n1 = 0, n2 = 1, sum, mx = 100000000, n1o = 0, n2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{

		for (n1o > 0)
		{
			printf("%lu", n1o);
		}
		initial = numlength(mx) - 1 - numlength(n1);

		while (n1o > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}
		printf("%lu", n1);

		sum = (n1 + n2) % mx;
		sumo = n1o + n2o + (n1 + n2) / mx;
		n1o = n2o;
		n2 = sum;
		n2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

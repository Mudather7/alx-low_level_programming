#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, sum;
	float total_sum;

	while (n2)
	{
		sum = n1 + n2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;
		n1 = n2;
		n2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}

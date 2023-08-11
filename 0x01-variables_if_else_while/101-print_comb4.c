#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	int n = 48;
	int i = 48;

	while (x = 48, i = 49, n <= 57)
	{
		while (i = 49, x <= 57)
		{
			while (i <= 57)
			{
				if (i != x != n && i < x < n)
				{
					putchar(x);
					putchar(n);
					putchar(i);

					if (n + x + i != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				i++;
			}
			x++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

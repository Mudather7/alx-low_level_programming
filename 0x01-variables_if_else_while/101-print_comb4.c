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

	while (x = 49, i = 50, n <= 57)
	{
		while (i = 50, x <= 57)
		{
			while (i <= 57)
			{
				if (i != x  && i != n && x != n && i > x && x > n)
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

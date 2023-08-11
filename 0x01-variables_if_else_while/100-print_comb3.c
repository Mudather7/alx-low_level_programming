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

	while (x = 48, n <= 57)
	{
		while (x <= 57)
		{
			if (x != n && x < n)
			{
				putchar(x);
				putchar(n);

				if (n + x != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}

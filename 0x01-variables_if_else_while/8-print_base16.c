#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	
	int n;

	for (n = 65; n <= 70; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

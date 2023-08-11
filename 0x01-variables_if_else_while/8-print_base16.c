#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}


	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}

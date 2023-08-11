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
		if (digit == 57)
			break;
		putchar(',');
		putchar(' ');
		digit++;
	}


	putchar('\n');
	return (0);
}

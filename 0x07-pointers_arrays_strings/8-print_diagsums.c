#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: an array.
 *
 * @size: number matrix.
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - i - 1];
		a = a + size;
	}
	printf("%d, %d\n", sum1, sum2);
}

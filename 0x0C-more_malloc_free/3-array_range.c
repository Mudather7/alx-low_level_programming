#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 *
 * @min: smallest num in the array.
 *
 * @max: largest num in the array.
 *
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));

	if (ptr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ptr[j] = i;
			j++;
		}
		return (ptr);
	}
	else
		return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers.
 *
 * @width: first integer.
 *
 * @height: second integer.
 *
 * Return: pointer to the array.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	a = (int **)malloc(height * sizeof(int *));

	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));

		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}


	}
	return (a);
}

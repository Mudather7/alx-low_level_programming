#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 *
 * @nmemb: an array.
 *
 * @size: size of the momery block to be allocated.
 *
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			ptr[i] = 0;
		}
		return (ptr);
	}
	else
		return (NULL);
}


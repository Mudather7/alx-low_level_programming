#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 *
 * @ptr: pointer to the memory previously allocated.
 *
 * @old_size: the size, in bytes, of the allocated space for ptr.
 *
 * @new_size: the new size, in bytes of the new memory block.
 *
 * Return: pointer to the address of the new momery block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		p = malloc(new_size);
		free(ptr);
		return (p);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
